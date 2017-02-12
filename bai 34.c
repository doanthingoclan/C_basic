#include<stdio.h>
#include<math.h>
void main()
{
float i,n,Sn=0,t;
    printf("nhap n= ");
    scanf("%f",&n);
    t=1;
    for(i=2;i<=n;i++)
    {
        Sn=sqrt((i)+t);
        t=Sn;

    }
    printf("Sn=%f",Sn);
}
