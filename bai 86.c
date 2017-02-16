//Bài 86: Tính S(n) = 1^3 + 2^3 + … + N^3//
#include<stdio.h>
#include<math.h>
void main()
{
int i,n,Sn=0;
printf("nhap n:=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    Sn+=pow(n,3);
}
printf("Sn:= %d",Sn);
}
