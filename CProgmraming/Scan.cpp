#include <stdio.h>

int ScanSentence(int a, int b, int c) {
	int num1=0, num2=0, num3=0, result=0;
	result = (num1 - num2)*(num2+num3)*(num3%num1);

	printf("number one: ");
	scanf_s("%d %d %d \n", &num1, &num2, &num3);

	printf("%d + %d = %d", num1, num2, num1 + num2);
	printf("%d x %d + %d = %d", num1, num2, num3, num1 * num2 + num3);
	printf("%dÀÇ Á¦°ö±Ù: %d", num3, num3 * num3);

	return 0;
}