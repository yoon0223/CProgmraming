#include <stdio.h>

int main() {
	int xpos1 = 0, xpos2 = 0;
	int ypos1 = 0, ypos2 = 0;
	int area = 0;

	printf("ù ��° ��ǥ�� x��, y��: \n");
	scanf_s("%d %d", &xpos1, &ypos1);
	printf("�� ��° ��ǥ�� x��, y��: \n");
	scanf_s("%d %d", &xpos2, &ypos2);

	area = (xpos2 - xpos1) * (ypos2 - ypos1);

	printf("(%d, %d), (%d, %d,) ��ǥ�� ���� ���簢���� ����: %d", xpos1, ypos1, xpos2, ypos2, area);

	return 0;
}