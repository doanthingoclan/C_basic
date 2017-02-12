#include<stdio.h>
#include<math.h>
void main()
{
int n,i,k;
printf("Nhap n:= ");
scanf("%d",&n);
int sn=0;
for(i=1;i<(n/2);i++)
{
        sn+=i;
        k=i;
        if(sn>n)
        {
            sn-=k;
            k--;
            break;
        }

}
printf("\nS(k) = %d \n k = %d",sn,k);
}
