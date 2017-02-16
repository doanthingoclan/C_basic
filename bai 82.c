//Bài 82: Viết chương trình tìm số lớn nhất trong 3 số thực a, b, c//
#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
printf("nhap a := ");
scanf("%d",&a);
printf("nhap b := ");
scanf("%d",&b);
printf("nhap c := ");
scanf("%d",&c);
if(a>b&&a>c)
    printf("so lon nhat la : %d",a);
else if(b>a&&b>c)
    printf("so lon nhat la : %d",b);
else if (c>a&&a>b)
    printf("so lon nhat la : %d",c);
}
