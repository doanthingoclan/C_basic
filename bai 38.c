#include<stdio.h>
#include<math.h>
float canbacn(int n);
void main()
{
int n;
float sn;
printf("Nhap n := ");
scanf("%d",&n);
sn=(float)canbacn(n);
printf("\nSn = %f",sn);
}

float canbacn(int n)
{
    if(n>=2)
        return (float)pow(n+canbacn(n-1),(float)1/(n+1));
    else
        return (float)sqrt(1);
}



