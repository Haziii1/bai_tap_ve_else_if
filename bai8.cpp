#include <stdio.h>
int main ()
{
	int n,i;
	int Lucky = 1;
	printf("Nhap so n : ");
	scanf("%d", &n);
	for ( i = n ; i > 0 ; i = i / 10) {
		int m = i % 10;
		if ( m != 6 && m != 8) {
			Lucky = 0;
			break;
		}
	}
if ( Lucky == 0) {
	printf("%d khong la so may man", n);
} else {
	printf("%d la so may man", n);
}
return 0;
}

