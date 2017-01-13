#include <stdio.h>
void main()
{
	/*
		判断年份是否是闰年
	*/
	/*
	int year;
	printf("请输入年份：");
	scanf("%d",&year);
	*/
	for(int year=2000;year<2051;year++)
	{
			if(year%4!=0)
		{
			printf("%d不是闰年\n",year);
		}
		else if(year%100!=0)
		{
			printf("%d是闰年\n",year);
		}
		else if(year%400==0)
		{
			printf("%d是闰年\n",year);
		}
		else
		{
			printf("%d不是闰年\n",year);
		}
	}
	
}
