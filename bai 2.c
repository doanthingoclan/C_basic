#include <stdio.h>
#include <math.h>
void main()
{
	int i,n, tong=0;
	printf("nhap gia tri cua n: =");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		tong+=i*i;
	}
	printf("tong Sn:= %d \n",tong);
}
