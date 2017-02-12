#include <stdio.h>
#include <math.h>
void main()
{
	int i,n,x,t=1,tong=0;
	printf("nhap gia tri cua x,n: =");
	scanf("%d%d",&x,&n);
	if(n=1)
        printf("tong Sn:= %d",x);
	else if(n!=1)
	{
	for(i=1;i<=n;i++)
	{
        t=t*x*x*x;
        tong=tong+x+t;
	}

	printf("tong Sn:= %d \n",tong);
	}
}
