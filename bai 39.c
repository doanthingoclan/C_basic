#include<stdio.h>
#include<math.h>
void main()
{

    float i,n,t=1,Sn,gt=1;
    printf("nhap n=");
    scanf("%f",&n);
    for(i=2;i<=n;i++)
    {
        gt=gt*i;
        Sn=pow(gt+t,1/(i+1));
        t=Sn;
    }
    printf("Sn=%f",Sn);
}
