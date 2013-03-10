#include <cstdlib>
#include <stdio.h>
#include <math.h>

int main()
{
  int i,j,m,t,n;
	int x[20],y[20];
	int lines;  //测试的组数
	int numbers;  //住户数目
	int answer[20];
	
	//输入的设置
	//printf("输入测试组数！");
	scanf("%d",&lines);
	
	for(t=1;t<=lines;t++)
	{
		//printf("输入用户数目!");
		scanf("%d",&numbers);
		for(n=1;n<=numbers;n++)
		{
			scanf("%d%d",&x[n-1],&y[n-1]);
		}
	
	
	int test=100;
	int temp=0;
	for(i=1;i<100;i++)
		{
		for(j=1;j<100;j++)
			{
				
				for(m=0;m<numbers;m++)
					{
						temp=temp+abs(x[m]-i)+abs(y[m]-j);
					}
				if ((temp<test)&&(temp!=0))
					{
						test=temp;
					}
				temp=0;	
			}
		}
		
	//printf("%d \n",test);
	answer[t-1]=test;
	}
	for(t=1;t<=lines;t++)
		printf("%d\n",answer[t-1]);
	return 0;
}			
