#include <stdio.h>

int main() {
	// while��
	int sum = 0, i = 0;
	int num,input;

	printf("�Է��� ������ ��: \n");
	scanf_s("%d", &num);

	while (i++ < num) {
		printf("���� ���� �Է�: \n");
		scanf_s("%d", &input);
		sum += input;
	}

	printf("�Է��� ���: %f \n", (double)sum / num);

	// while���� ��ø (Ž�� �� ���� �ʿ�)(�� ������ ���� �� ���ϱ�)
	int j = 0,  total = 0;
	int nb;

	while (j++ < 5) {
		printf("���� ���� �Է�: \n");
		scanf_s("&d", &nb);
		while (nb < 1) {
			printf("1 �̻��� ���� �Է�: \n");
			scanf_s("&d", &nb);
		}
		total += nb;
	}

	// while���� ��ø (���� �Ŷ� ���ϱ�)�ä�,./
	int a = 1;
	int b;

	while (a <= 5) {
		b = a;
		while (0 <= b) {
			printf("o");
			b--;

		}
		printf("*");
		a++;
	}

	// do-while�� (������� ������ ��)
	int k = 0;

	do {
		k = k * 2;
		k++;
	} while (k < 50);
	printf("%d", k);

	// for�� (���� �������� �ٽ�)
	int start, end;

	printf("���۰� �� �Է�: \n");
	scanf_s("%d %d", &start, &end);

	return 0;
}