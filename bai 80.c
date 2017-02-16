#include <stdio.h>
#include <math.h>
void main()
{
	int i,n,x,tu=1,mau=1,tong=0;
	printf("nhap gia tri cua x,n: =");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++)
	{
        tu=tu*x;
        mau+=i;

        tong=tong+ (tu/mau);
	}

	printf("tong Sn:= %d \n",tong);
}
