#include <stdio.h>
#include <math.h>
void main()
{
	int i,n,x,t=0;
	float tong=0;
	printf("nhap gia tri cua n: =");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
        t+=i;
        tong+=(float)1/t;
	}

	printf("tong Sn:= %.3f \n",tong);
}
