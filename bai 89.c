//Bài 89: Viết chương trình tính tổng các giá trị lẻ nguyên dương nhỏ hơn N//
#include<stdio.h>
#include<math.h>
void main()
{
int i,n;
int sn=0;
printf("nhap n:= ");
scanf("%d",&n);
for(i=1;i<(n);i=i+2)
{
        sn+=i;
        if(sn>n)
        {
            if(n%2==0)
            {
                break;
            }
            if(n%2!=0)
            {
                sn-=n;
            }


        }

}
printf("\ntong so le nguyen duong nho hon N la %d",sn);

}
