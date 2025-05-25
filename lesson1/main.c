#include <stdio.h>
void in_tong() {
	int n = 0;
	printf("Nhap n: ");
	scanf_s("%d", &n);
	long long tong = 0;
	for (int i = 1; i <= n; i++) {
		tong += i;
	}
	printf("Tong %d la: %lld\n", n, tong);
}
void main(void) {
	in_tong();
}
