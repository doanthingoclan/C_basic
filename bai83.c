//Bài 83: Viết chương trình nhập 2 số thực, kiểm tra xem chúng có cùng dấu hay không//
#include<stdio.h>
#include<math.h>
void main()
{
int a,b;
printf("nhap a :=");
scanf("%d",&a);
printf("nhap b:=");
scanf("%d",&b);
if(a*b>0&&a!=0&&b!=0)
    printf("2 so cung dau");
else if(a*b<0&&a!=0&&b!=0)
    printf("2 so khac dau");
}
