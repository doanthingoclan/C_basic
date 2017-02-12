#include<stdio.h>
#include<math.h>
void main()
{
int n,i,a[50],x=0;
printf("Nhap n: = ");
scanf("%d",&n);
for(i=1;i<=(n/2);i++)
{
    if(n%i==0)
        {
            if(i%2==1)
            {
                printf("%d ",i);
                a[x]=i;
                x++;
            }
        }
}
printf("\nUoc so le lon nhat la %d ",a[x-1]);

}
