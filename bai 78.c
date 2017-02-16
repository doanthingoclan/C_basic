#include<stdio.h>
#include<math.h>
void main()
{
    int i,n;
    printf("nhap n:= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if (n%i==0)
       {
           printf("%3d",i);
       }

    }
}
