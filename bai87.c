//Bài 87: Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + … + n > 10000//
#include<stdio.h>
#include<math.h>
void main()
{
int i,n;
int sn=0;
for(i=1;i<(10000/2);i++)
{
        sn+=i;
        n=i;
        if(sn>10000)
        {
            sn-=n;
            n--;
            break;
        }

}
printf("\nso nguyen duong nho nhat la %d",n);
}
