//Bài 98: Lập chương trình giải hệ: ax + by = c
                                //dx + ey = f. Các hệ số nhập từ bàn phím//
#include <stdio.h>
void main()
{
int a,b,c,d,e,f ,x,y;
printf("nhap cac so a,b,c cua phuong trinh 1: \n");
scanf("%d%d%d",&a,&b,&c);
printf("nhap cac so d,e,f cua phuong trinh 2 : \n");
scanf("%d%d%d",&d,&e,&f);
if(a==d&&b==e&&c!=f)
{
    printf("phuong trinh vo nghiem");
}
else if(a==d&&b==e&&c==f)
{
    printf("phuong trinh vo so nghiem");
}
else if (a!=d&&b!=e&&c!=f)
{
   y=(c*d-a*e)/(b*d-e*f);
    x=(c-b*y)/a;
printf("nghiem cua he phuong trinh la : \n x= %d ; y=%d  ",x,y);
}
}
