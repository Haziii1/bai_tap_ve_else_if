#include <stdio.h>
int main()
{
	int i , n , sum = 0;
	printf("Nhap so n : ");
	scanf("%d", &n);
	for ( i = 1 ; i <= n / 2 ; i++) {
		if ( n % i == 0 ) {
			sum = sum + i;
		}
	}
if ( sum == n) {
	printf("%d la so hoan hao", n);
} else {
 printf("%d khong la so hoan hao", n);
 }
 return 0;
 }
