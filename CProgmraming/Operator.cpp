/*
������ ������
������ ���ؼ��� ������ �����ڰ� �ʿ��ϴ�.
������ �����͸� ������ �� �ִ� �޸��� �̸�����, ����� �ʱ�ȭ�� �ʿ��ϴ�.
������ ������ �����ڸ� ���� ��ǻ�ʹ� �����Ѵ�.
*/

#include <stdio.h>

int main() {
	int num1 = 9, num2 = 2, num3 = 6;
	int result1, result2, result3, result4, result5, result6;

	//�⺻������
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d x %d = %d \n", num1, num2, num1 * num2);
	printf("%d ������ %d = %d \n", num1, num2, num1 / num2);
	printf("%d ������ %d�� ������ = %d \n", num1, num2, num1 % num2);

	//���մ��Կ�����
	num1 += 3;
	num2 *= 4;
	num3 %= 5;
	printf("9 + 3 = %d \n", num1);
	printf("2 * 4 = %d \n", num2);
	printf("6 % 5 = %d \n", num3);

	//����������
	num1 = 10;
	num2 = (num1++) + 2;
	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++);
	printf("num1: %d \n", num1);

	//���ҿ�����
	num1 = 10;
	num2 = (num1--) + 2;
	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);

	//���迬����
	result1 = (num1 == num2);
	result2 = (num1 <= num2);
	result3 = (num1 > num2);
	printf("result: %d, %d, %d= \n", result1, result2, result3);

	//��������
	result4 = (num1 == 9 && num2 == 12);
	result5 = (num1 < 12 || num2>12);
	result6 = (!num1);
	printf("result: %d, %d, %d \n", result4, result5, result6);

	//��Ʈ������
	printf("AND ������ ���: %d \n", num1 & num2);
	printf("OR ������ ���: %d \n", num1 | num2);
	printf("XOR ������ ���: %d \n", num1 ^ num2);
	printf("not ������ ���: %d \n", ~num1);
	printf("���� �̵� ������ ���: %d \n", num1 << 1);
	printf("���� �̵� ������ ���: %d \n", num1 >> 1);

	return 0;
}