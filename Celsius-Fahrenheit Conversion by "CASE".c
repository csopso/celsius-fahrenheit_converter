#include<stdio.h>

int main() {
	int a;
	puts("Welcome to Celicius-Fahrenheit Converter");
	puts("For your C-F conversions press 1");
	puts("For your C-F conversions press 2");
	scanf("%d", &a);
	double c=0, f=0;
	switch (a) {
	case 1:
		puts("Please Write C value");
		printf("C=");
		scanf("%lf", &c);
		//printf("C=%lf\n", c);
		f = 1.8*c + 32;
		printf("%lf C= %lf F", c, f);
		break;
	case 2:
		puts("Please Write F value");
		puts("F=");
		scanf("%lf", &f);
		//printf("C=%lf\n", f);
		c = ((f-32)*5)/9;
		printf("%lf F= %lf C", f, c);
		break;
	default: puts("error");
	}
	return 0;
}
