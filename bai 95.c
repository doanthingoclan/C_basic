//Bài 95: Viết chương trình nhập 3 số thực. Hãy thay tất cả các số âm bằng trị tuyệt đối của nó//
#include <stdio.h>
#include <math.h>

void main()
{
int a,b,c;
printf("nhap a,b,c: =");
scanf("%d%d%d",&a,&b,&c);
if(a<=0)
    printf("gia tri tuyet doi cua a la : %d",-a);
else printf("gia tri tuyet doi cua a la : %d \n",a);
if(b<=0)
    printf("gia tri tuyet doi cua b la : %d \n ",-b);
else printf("gia tri tuyet doi cua b la : %d \n",b);
if(c<=0)
    printf("gia tri tuyet doi cua c la : %d \n ",-c);
else printf("gia tri tuyet doi cua c la : %d \n",c);
}
