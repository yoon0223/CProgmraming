#include <stdio.h>

void PrintSentence();
void Operator();
void ScanSentence();
void BitData();

int main() {
	int num1 = 0, num2 = 0, num3 = 0;
	printf("세 개의 정수 입력: ");
	scanf_s("%d %o %x", &num1, &num2, &num3);
	printf("입력한 정수의 10진수 출력: %d %d %d \n", num1, num2, num3);

	PrintSentence();
	Operator();
	//ScanSentence(3, 4, 5);
	BitData();

	

	return 0;
}