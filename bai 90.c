//Bài 90: Viết chương trình tìm số nguyên dương m lớn nhất sao cho 1 + 2 + … + m < N//
#include<stdio.h>
#include<math.h>
void main()
{
int i,n,m;
int sn=0;
printf("nhap n:=");
scanf("%d",&n);
for(i=1;i<(n);i++)
{
        sn+=i;
        m=i;
        if(sn>n)
        {
            sn-=m;
            m--;
            break;
        }

}
printf("\nso nguyen duong lon nhat la %d",m);
}
