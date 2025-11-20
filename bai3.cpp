#include <stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Nhap so n: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++) {
		sum += i;
	}
printf("Tong la: %d", sum);
return 0;
}
