#include<stdio.h>
#include<math.h>
void main()
{
int i,n,x,sn=0;
printf("nhap x=");
    scanf("%d",&x);
    printf("nhap n=");
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sn+=pow(-1,i)*pow(x,i*2);
}
printf("\n\nSn = %d",sn);
}
