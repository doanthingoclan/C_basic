//Bài 94: Viết chương trình in ra tất cả các số lẻ nhỏ hơn 100 trừ các số 5, 7, 93//
#include <stdio.h>
void main()
{
int i;
printf("Tat ca so le nho hon 100 tru cac so 5,7,93 la : \n");
for(i=1;i<=100;i=i+2)
{
    if(i!=5&&i!=7&&i!=93)
    {
        printf("%d  ",i);
    }
}
}
