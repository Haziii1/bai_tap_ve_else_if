#include <stdio.h>
int main ()
{
	int n,i;
	printf("Nhap so n : ");
	scanf("%d", &n);
	printf ("    Bang Cuu chuong cua %d la:   \n", n);
	for(i=1;i<=10;i++) {
		printf("%d x %d = %d\n", n,i,n*i);
	}
return 0;
}
	
