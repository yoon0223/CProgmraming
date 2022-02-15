#include <stdio.h>

int main() {
	int xpos1 = 0, xpos2 = 0;
	int ypos1 = 0, ypos2 = 0;
	int area = 0;

	printf("첫 번째 좌표의 x값, y값: \n");
	scanf_s("%d %d", &xpos1, &ypos1);
	printf("두 번째 좌표의 x값, y값: \n");
	scanf_s("%d %d", &xpos2, &ypos2);

	area = (xpos2 - xpos1) * (ypos2 - ypos1);

	printf("(%d, %d), (%d, %d,) 좌표를 가진 정사각형의 넓이: %d", xpos1, ypos1, xpos2, ypos2, area);

	return 0;
}