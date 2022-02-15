/*
������ ǥ�����
��ǻ�ʹ� �⺻������ 2������ �̿��Ͽ� �����͸� ǥ���Ѵ�.
�ݸ�, ����� ���� ǥ���ϴ� ���� 10������ ������.
�ܿ��� �޸𸮿� ������ ȿ������ ���� 8����, 16������ ����ϱ⵵ �Ѵ�.
��ǻ�Ͱ� �����͸� ǥ���ϴ� ��Ŀ��� ����, �Ǽ��� ǥ������� ���еȴ�.
�̿� ���� ������ ���� �� �����͸� ǥ���ϴ� ����� �ڷ����� ������ �ʿ��ϴ�.
*/

#include <stdio.h>

int main() {
	int num1 = 0xA7; // 16����
	int num2 = 032; // 8����
	float num3 = 0.0;

	//n���� ǥ��
	printf("%x�� 10���� ���� ��: %d \n", num1);
	printf("%o�� 10���� ���� ��: %d \n", num2);

	// �Ǽ� ǥ���� ����
	for (int i = 0; i < 100; i++)
		num3 += 0.1;
	printf("%f \n", num3);

	// 2�� ���� ��
	num2 = ~num2;
	num2 += 1;
	printf("������ �ٲ� ����: %d \n", num2);

	//�ڷ����� ũ��
	char ch1 = 9;
	int inum = 1052;
	double dnum = 3.1415;

	printf("���� ch1�� ũ��: %d \n", sizeof(ch1));
	printf("���� inum�� ũ��: %d \n", sizeof(inum));
	printf("���� dnum�� ũ��: %d \n", sizeof(dnum));
	printf("������ ũ��: %d \n", sizeof(7));
	printf("�Ǽ��� ũ��: %d \n", sizeof(3.14));
	printf("������ ũ��: %d \n", sizeof('A'));

	//�ƽ�Ű�ڵ�
	char ch2 = 'A', ch3 = 65;

	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);

	//������ ����ȯ
	double d1 = 245;
	int i1 = 3.1415;
	int i2 = 129;
	char c = i2;
	double d2 = 2.5 * (double)i1;

	printf("���� 245�� �Ǽ���: %f \n", i1);
	printf("�Ǽ� 3.1415�� ������: %d \n", i2);
	printf("ū ���� 129�� ���� ������: %f \n", c);
	printf("����� ����ȯ�� ���: %d \n", d2);

	//�ڷ����� ����
	char cnum1 = 1, cnum2 = 2;
	char result = num1 + num2;
	printf("size of cnum1 & cnum1: %d, %d \n", sizeof(cnum1), sizeof(cnum2));
	printf("size of char add: %d \n", sizeof(cnum1+cnum2));
	printf("size of result: %d \n", sizeof(result));

	return 0;
}