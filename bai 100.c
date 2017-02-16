//Bài 100: Viết chương trình giải phương trình bậc 2//
#include <stdio.h>
void main()
{
int a,b,c,deta;
printf("nhap a,b,c trong phuong trinh bac 2 ax^2+bx+c=0 \n");
scanf("%d%d%d",&a,&b,&c);
if(a==0)
{
    if(b==0)
    {
    printf("phuong trinh co 1 nghiem la : x= %d \n",-c/b);
    }
    else printf("phuong trinhf vo nghiem");
}
if(a!=0&&b==0)
{
    if(c>0)
    {
    printf("phuong trinh vo nghiem \n");
    }
    else printf("phuong trinhf co nghiem la x1= %d ; x2= %d",-sqrt(c),sqrt(c));
}
if(a!=0&&b!=0)
{
    deta=b*b-4*a*c;
    if(deta>0)
    {printf("phuong trinh co nghiem la : x1= %d  ; x2= %d",(-b+sqrt(deta))/(2*a),(-b-sqrt(deta))/(2*a));}
    if(deta<0)
    {printf("phuong trinh vo nghiem "); }
    if(deta=0)
    {printf("nghiem cua phuong trinh la x1=x2= %d",-b/(2*a));}
}
}
