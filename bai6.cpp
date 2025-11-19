#include <stdio.h>

int main() {
    int i, n, Prime = 1;

    printf("Nhap so n: ");
    scanf("%d", &n);

    if (n < 2) {
        Prime = 0;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                Prime = 0;
                break;
            }
        }
    }

    if (Prime == 1) {
        printf("%d la so nguyen to", n);
    } else {
        printf("%d khong phai la so nguyen to", n);
    }

    return 0;
}

