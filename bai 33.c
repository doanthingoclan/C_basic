#include<stdio.h>
#include<math.h>
void main()
{
float i,n,Sn=0,t;
    printf("nhap n= ");
    scanf("%f",&n);
    t=sqrt(2);
    for (i=1;i<n;i++)
    {
       Sn=sqrt(2+t);
       t=Sn;
    }
    printf("Sn= %f",Sn);
}
