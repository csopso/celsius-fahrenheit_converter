#include<stdio.h>
double cf(double b);
double fc(double b);
int main() {
	int d = 1;

	puts("Welcome to Celicius-Fahrenheit Converter");
	do {
		int a, c = 0;
		double b;
		
		puts("Enter the value you want to convert");
		scanf("%lf", &b);
		puts("For your C-F conversions press 1");
		puts("For your F-C conversions press 2");
		scanf("%d", &a);

		while (c != 1) {
			if (a == 1) {
				cf(b);
				c = 1;
			}
			else if (a == 2) {
				fc(b);
				c = 1;
			}
			else {
				puts("For your C-F conversions press 1");
				puts("For your F-C conversions press 2");
				scanf("%d", &a);
			}
		}
		puts("If you want a new conversion press 1");
		puts("Press any key to exit");
		scanf("%d", &d);
	} while (d == 1||d==1);
	return 0;
}
double cf(double b) {
	double f;
	f = 1.8*b + 32;
	printf("%lf C= %lf F\n", b, f);
	return f;
}

double fc(double b) {
	double c;
	c = ((b - 32) * 5) / 9;
	printf("%lf F= %lf C\n", b, c);
	return c;
}
