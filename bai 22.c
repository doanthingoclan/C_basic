#include <stdio.h>
#include<math.h>
void main()
{
    int n,i,sn=1;
    printf("Nhap n:=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        sn*=i;
    }
    printf("\nTich cac uoc cua %d la: sn = %d",n,sn);
}

