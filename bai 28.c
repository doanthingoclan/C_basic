#include<stdio.h>
#include<math.h>
void main()
{
int n,i,sn=0;
    printf("Nhap n:");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sn+=i;
    }
    printf("\nTong cac uoc la:sn = %d",sn);
}
