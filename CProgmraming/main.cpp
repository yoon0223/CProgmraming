#include <stdio.h>

void PrintSentence();
void Operator();
void ScanSentence();
void BitData();

int main() {
	int num1 = 0, num2 = 0, num3 = 0;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %o %x", &num1, &num2, &num3);
	printf("�Է��� ������ 10���� ���: %d %d %d \n", num1, num2, num3);

	PrintSentence();
	Operator();
	//ScanSentence(3, 4, 5);
	BitData();

	

	return 0;
}