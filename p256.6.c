#include<stdio.h>
#include<stdlib.h>
#define N 500
int main()
{
	int i,j,n=1,k;
	char ser[N];
	printf("ÊäÈë×Ö·û´®£º");
	scanf("%d",&i);
	j=i;
	while(i/10!=0)
	{
		n++;
		i=i/10;
	}
	i=j;
	for(k=n-1;k>=0;k--)
	{
		ser[k]=i%10;
	}
	printf("%d",n);
	return 0;
}
