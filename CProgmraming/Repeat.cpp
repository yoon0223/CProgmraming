#include <stdio.h>

int main() {
	// while문
	int sum = 0, i = 0;
	int num,input;

	printf("입력할 정수의 수: \n");
	scanf_s("%d", &num);

	while (i++ < num) {
		printf("더할 수를 입력: \n");
		scanf_s("%d", &input);
		sum += input;
	}

	printf("입력의 평균: %f \n", (double)sum / num);

	// while문의 중첩 (탐구 및 정리 필요)(내 생각과 교재 답 비교하기)
	int j = 0,  total = 0;
	int nb;

	while (j++ < 5) {
		printf("더할 수를 입력: \n");
		scanf_s("&d", &nb);
		while (nb < 1) {
			printf("1 이상의 수를 입력: \n");
			scanf_s("&d", &nb);
		}
		total += nb;
	}

	// while문의 중첩 (교재 거랑 비교하기)ㅓㅡ,./
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

	// do-while문 (교재와의 차이점 비교)
	int k = 0;

	do {
		k = k * 2;
		k++;
	} while (k < 50);
	printf("%d", k);

	// for문 (많은 정신으로 다시)
	int start, end;

	printf("시작과 끝 입력: \n");
	scanf_s("%d %d", &start, &end);

	return 0;
}