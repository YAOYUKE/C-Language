#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*************************************************************************
- Function    : 猜数游戏 
- Description : 猜出程序给定1-100之间的数 
- Author      : Y.
- Date        : 2017.12
 *************************************************************************/
 
 
int main()
{
	srand(time(0));                                                    // 申请一个随机数 
	int number = rand()%100+1;                                         // 取余  得到一个0-99以内的数  加1 -> 1-100 
	int count = 0;                                                     // 计算次数
	int x = 0;                                                         // 存放输入的数
	
	printf("我已经想好了一个1到100之间的整数!\n");                     // 给出提示 
	
	do
	{
		printf("猜猜这个数:\n");                                       // 给出提示
		scanf("%d",&x);                                                // 获取输入值 
		count++;                                                       // 计数
		
		if(x>number)
		{
			printf("你猜的数大了\n");
		} 
		else if(x<number)
		{
			printf("你猜的数小了\n");
		} 
		 
	} while(x != number);                                              // 直到猜中退出循环 
	
	
	printf("恭喜,利用%d次就猜到了正确答案是:%d!\n",count,number);      // 猜中给出所用次数和正确结果 
	
	 

return 0;

}
