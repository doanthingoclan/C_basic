#include <stdio.h>
#include <math.h>
void main()
{
	int i,n;
	float tong=1;
	printf("nhap gia tri cua n: =");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		tong*=(float)i;
	}
	printf("tong Sn:= %.3f \n",tong);
}
