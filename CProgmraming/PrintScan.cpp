/* 
printf()�� scanf()
printf() �Լ��� �Է¹��� ���ڸ� ����Ϳ� ����ϴ� �Լ���,
�������ڷδ� ���ڿ�, ���, ���갪, �Լ� ��ȯ���� ��� �����ϴ�.
�̷��� ���������� ������ ���ؼ��� ������ ���Ĺ����� ����� �ʿ��ϴ�.
�̿� ���Ǵ� �Լ��� scanf() �Լ���, 
Ű����� �Է¹��� �����͸� ������ �ּҿ� �����Ѵ�.
���� �پ��� ������ �����͸� �Է¹��� �� �����Ƿ� ������ ������Ÿ�� ������ �߿��ϴ�.
*/

#include <stdio.h>

void PrintDate();
int AddThreeNum(int, int, int);

int main() {
	int num1 = 0, num2 = 0, num3 = 0, result = 0;

	PrintDate();

	printf("input three number: ");
	scanf_s("%d %d %d \n", &num1, &num2, &num3);

	AddThreeNum(num1, num2, num3);

	return 0;
}

void PrintDate() {
	printf("Hello Everybody \n");
	printf("Today is %d-%d-%d \n", 2022, 1, 5); // �Լ� �̿��Ͽ� ���� ��¥ ��� �Լ��� ����
}

int AddThreeNum(int a, int b, int c) {
	int num1 = 0, num2 = 0, num3 = 0;
	return num1 + num2 + num3;
}