#include <stdio.h>
#include <math.h>
void main()
{
	int i,n,x,t=1,tong=0;
	printf("nhap gia tri cua x,n: =");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++)
	{
        t=t*x*x;
        tong+=t;
	}

	printf("tong Sn:= %d \n",tong);
}
