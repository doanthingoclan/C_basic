//Bài 77: Viết chương trình tính tổng của dãy số sau: S(n) = 1 + 2 + 3 + … + n//
#include <stdio.h>
#include <math.h>
void main()
{
	int i,n, tong=0;
	printf("nhap gia tri cua n: =");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		tong+=i;
	}
	printf("tong Sn:= %d \n",tong);
}
