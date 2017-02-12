#include <stdio.h>
#include <math.h>
void main()
{
	int tam=1,i,n;
	float tong=0;
	printf("nhap gia tri cua n: =");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

		tam*=i;
		tong+=tam;
	}
	printf("tong Sn:= %.3f \n",tong);
}
