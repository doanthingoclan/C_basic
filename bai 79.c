//Bài 79: Hãy đếm số lượng chữ số của số nguyên dương n
#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,dem=0;
    printf("nhap n:= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if (n%i==0)
       {
           dem++;
       }

    }
    printf("%d",dem);
}
