#include <stdio.h>
int main(){
  //变量的定义
	int numbers;  //测试组数
	void insort(int s[],int n);  //排序函数的声明
	int i,j,m;
	long times;  //总用时
	int peoples;  //过河的总人数
	int speed[1001];  //每个人的速度
	
	
	
	//请输入测试组数
	scanf("%d",&numbers);
	for(i=1;i<=numbers;i++)
	{
		times=0;
		scanf("%d",&peoples);  //输入人数
		for(j=1;j<=peoples;j++)
			scanf("%d",&speed[j]);
		//此处排序！
		insort(speed,peoples);
		
		/**if(peoples<0)
			printf("wrong number!");
		else*/ if(peoples<4)
				{
					//printf("mark_A\n");
					switch(peoples)
					{
						//case 0: times=0; break;
						case 1: times=speed[1]; break;
						case 2: times=speed[2]; break;
						case 3: times=speed[1]+speed[2]+speed[3]; break;
						//case 4: times=speed[1]+3*speed[2]+speed[4]; break;
					}
				}
			else {
					//printf("mark_B\n");
					m=peoples;
					if(peoples%2)
						{
							//printf("mark_C\n");
							//printf("%d\n",m);
							//printf("%d %d\n",speed[1],speed[2]);
							//奇数时的结果
							while(m>3)
							{
							if(2*speed[2]<(speed[1]+speed[m-1]))
							{
							times=times+speed[1]+2*speed[2]+speed[m];
							//printf("%d\n",speed[m]);
							m=m-2;
							}
							else
							{
								times=times+2*speed[1]+speed[m-1]+speed[m];
								m=m-2;
							}
							}
							times=times+speed[1]+speed[2]+speed[m];
							
						}
					else {
							//printf("mark_D\n");
							//偶数时的结果
							while(m>3)
							{
							if(2*speed[2]<(speed[1]+speed[m-1]))
							{
							times=times+speed[1]+2*speed[2]+speed[m];
							//printf("%d\n",speed[m]);
							m=m-2;
							}
							else
							{
								times=times+2*speed[1]+speed[m-1]+speed[m];
								m=m-2;
							}
							}
							times=times+speed[2];
						 }
				 }
		printf("%ld\n",times);
	
	}
	return 0;
}

void insort(int s[],int n)
{
	int a,b;
	int i,j;
	for(i=2;i<=n;i++)
	{
		s[0]=s[i];
		j=i-1;
		while(s[0]<s[j])
		{
			s[j+1]=s[j];
			j--;
		}
		s[j+1]=s[0];
	}
	//for(a=1;a<=n;a++)
	//printf("%d ",s[a]);
}
