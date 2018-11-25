#include<stdio.h>
#include<stdlib.h>
#define N 8

void sums(float *a,float *posum,float *nesum,int ponember,int nenember);
int main()
{
	float a[N],posum,nesum;
	int ponember,nenember,i;
	printf("请输入8个数据：\n");
	for(i=0;i<8;i++)
	{
		scanf("%f",&a[i]);
	}
	sums(a,&posum,&nesum,ponember,nenember);
	printf("正数总和：%f\n",posum);
	printf("正数个数：%d\n",ponember);
	printf("负数总和：%f\n",nesum);
	printf("负数个数：%d\n",nenember);
	
	system("PAUSE");
	return 0;
}

void sums(float *a,float *posum,float *nesum,int ponember,int nenember)
{
	int i;
	*posum=*nesum=0.0;
	ponember=nenember=0;
	for(i=0;i<N;i++)
	{
		if(a[i]>0)
		{
			*posum+=a[i];
			ponember++;
		}
		else if(a[i]<0)
		{
			*nesum+=a[i];
			nenember++;
		}
	}
}
