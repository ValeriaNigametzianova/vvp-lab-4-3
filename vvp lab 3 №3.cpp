#include <stdio.h>

int main()
{
	float a, b;
	float S;
	printf("Enter a,please: ");
	scanf_s("%f", &a);
	printf("Enter b,please: ");
	scanf_s("%f", &b);
	S = (a + b) / 2;
	printf("%f", S);
	return 0;
}