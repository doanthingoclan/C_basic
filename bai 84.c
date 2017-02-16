//Bài 84: Viết chương trình giải và biện luận phương trình bậc nhất ax + b = 0//
#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float x;
printf("phuong trinh bac nhat ax+b =0 \n");
printf("nhap a:=");
scanf("%d",&a);
printf("nhap b:=");
scanf("%d",&b);
printf("nhap c:=");
scanf("%d",&c);
if(a==0&&b==0)
    printf("phuong trinh da cho vo so nghiem");
else if(a==0&&b!=0)
    printf("phuong trinh da cho vo nghiem");
else if (a!=0)
    printf("nghiem cua phuong trinh la: %.f3",(float)-b/a);
}
