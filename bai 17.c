#include<stdio.h>
#include<math.h>
void main()
{
	float i,n,Sn=0,D=0,gt=1,x;
	printf("nhap x := ");
	scanf("%f",&x);
	printf("nhap n :=");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		gt= gt*i;
		Sn=Sn+(pow(x,i))/gt;
	}
	printf("Sn= %f",Sn);
}
