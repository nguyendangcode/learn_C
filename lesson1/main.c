#include <stdio.h>
#include <math.h>
void phuong_trinh_bac_2(float a,float b,float c) {
	float delta = b * b - 4 * a * c;
	if (a != 0) {
		if (delta < 0) {
			printf("Phuong trinh vo nghiem\n");
		}
		else if (delta == 0) {
			float x = -b / (2 * a);
			printf("Phuong trinh co 1 nghiem: x = %.2f\n", x);
		}
		else {
			float x1 = (-b + sqrt(delta)) / (2 * a);
			float x2 = (-b - sqrt(delta)) / (2 * a);
			printf("Phuong trinh co 2 nghiem: x1 = %.2f, x2 = %.2f\n", x1, x2);
		}
	}
	else {
		if (b != 0) {
			float x1 = -c / b;
			printf("phuong trinh co 1 nghiem: %0.1f", x1);
		}
		else printf("phuong trinh vo so nghiem\n");
	}
}
int main() {
	phuong_trinh_bac_2(0, 0, -50); 
	return 0;
}