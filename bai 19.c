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
        sn+=(float)(pow(x,2*i+1))/(float)gt(2*i+1);
    }
    printf("\nSn := %f",sn);
}

int gt(int n)
{
    int i,sn=1;
    for(i=1;i<=n;i++)
    {
        sn*=i;
    }
    return sn;
}
