#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,x,Sn=0;
    printf("nhap x=");
    scanf("%d",&x);
    printf("nhap n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        Sn=Sn+(pow(-1,(i+1))*(pow(x,i)));
    }
    printf("Sn :=%d",Sn);
}
