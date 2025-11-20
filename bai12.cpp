#include <stdio.h>
int main()
{
	int n,i,X;
	printf("Nhap so luong phan tu :");
	scanf("%d", &n);
	
	int a[n];
	printf("Nhap so phan tu n\n");
	
	
	for( i=0 ; i<n ; i++ ) {
	printf("a[%d] = ", i);
	scanf("%d", &a[i]);
	}
	 printf("Nhap so X : ");
	 scanf("%d", &X);
	 
	 
	for(i=0;i<n;i++) {
		if( X == a[i]) {
			printf("Tim thay X o vi tri thu a[%d]", i);
			return 0;
		}
	}
	printf("Khong tim thay X");
return 0;
}
		
		
	
