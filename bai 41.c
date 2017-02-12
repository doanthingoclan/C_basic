#include <stdio.h>
#include<math.h>
float ps(int n);
void main()
{
    int n;
    float sn;
    printf("Nhap n:");
    scanf("%d",&n);
    sn = ps(n);

     printf("\nKet qua: sn = %.3f",sn);
}

float ps(int n)
{
    if(n==0) return 0;
    else return 1/(1+ps(n-1));
}
