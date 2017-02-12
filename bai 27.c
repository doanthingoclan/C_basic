#include<stdio.h>
#include<math.h>
void main()
{
int n,i,sn=0;
printf("Nhap n: = ");
scanf("%d",&n);
for(i=1;i<=(n/2);i++)
{
    if(n%i==0)
        {
            if(i%2==0)
            {
                printf("%d ",i);
                sn++;
            }
        }
}
printf("\nCo %d uoc so chan trong bai toan\n",sn);
}
