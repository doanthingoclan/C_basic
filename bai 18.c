#include<stdio.h>
#include<math.h>
void main(){
int x,n,i;
float sn=1;
printf("nhap x := ");
	scanf("%d",&x);
	printf("nhap n :=");
	scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sn+=pow(x,(float)(i*2)/Gt(i*2));
}
printf("\nSn = %f",sn);
}

int Gt(int a)
{
    if(a<=1)    return;
    else    return a*Gt(a-1);
}

