#include <stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Nhap so luong phan tu n: ");
	scanf("%d", &n);
	
	
	int a[n];
	printf("Nhap so cac so phan tu\n");
	
	for(i=0 ; i < n ; i++) {
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
		
		if( a[i] % 2 == 0) {
			sum = sum + a[i];
		}
	}
	
printf("tong cac so chan la : %d", sum);
return 0;
}
