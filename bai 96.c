//Bài 96: Viết chương trình nhập giá trị x sau tính giá trị của hàm số f(x) = 2x^2 + 5x + 9 khi x >= 5, f(x) = -2x^2 + 4x – 9 khi x < 5//
#include <stdio.h>
#include <math.h>

void main()
{
int x,f;
printf("Nhap x:\n");
scanf("%d",&x);
if(x>=5)
{
f=pow(2*x,2)+5*x+9;
printf("gia tri cua fx la : %d",f);
}
else if(x<5)
{
f=pow(-2*x,2)+4*x-9;
printf("gia tri cua fx la : %d",f);
}
}
