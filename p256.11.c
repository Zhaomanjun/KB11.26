#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

void in(int n,int i);
int out(int i);
int ser[SIZE];
int main()
{
	int n,i=0;
	do{
		printf("输入一个整数：");
		scanf("%d",&n);
		i++;
		 if(n!=0)
		 {
		 	in(n,i);
		 }
		 
		 else
		 	printf("出队数据是：",out(i));
	}while(n!=-1);
	
	system("PAUSE");
	return 0;
 } 
 
 void in(int n,int i)
 {
 	if(i==SIZE)
 	{
 		printf("队列已满\n");
		 system("PAUSE");
		 exit(1); 
	 }
	 ser[i]=n;
	 i++;
 }
 
 int out(int i)
 {
 	if(i==0)
 	{
 		printf("队列为空\n");
		 system("PAUSE");
		  exit(1);
	 }
	 i++;
	 return ser[i-1];
 }
