#include <stdio.h>
int main()
{
	int n,i;
	printf("Nhap so luong phan tu n : ");
	scanf("%d", &n);
	
	
	int a[n];
	printf("Nhap cac so phan tu\n");
	for (i=0; i < n ; i++) {
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	
	int max = a[0];
	for (i=0 ; i<n ; i++) {
		if ( a[i] > max ) {
			max = a[i];
		}
	}
	printf("Phan tu lon nhat la : %d", max);
return 0;
}
