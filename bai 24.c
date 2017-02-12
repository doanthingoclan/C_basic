#include<stdio.h>
#include<math.h>
void main(){
int n,i;
printf("Nhap n := ");
scanf("%d",&n);
for(i=1;i<=(n/2);i++)
{
    if(n%i==0)
        {
            if(i%2==1)
            printf("%d ",i);
        }
}


}
