#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,Tich=1;
    printf("nhap n :=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(i%2==1)
            {
                Tich*=i;
            }
        }
    }
    printf("Tich := %d",Tich);
}
