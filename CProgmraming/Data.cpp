/*
데이터 표현방식
컴퓨터는 기본적으로 2진수를 이용하여 데이터를 표현한다.
반면, 사람이 수를 표기하는 것은 10진수를 따른다.
외에도 메모리와 연산의 효율성을 위해 8진수, 16진수를 사용하기도 한다.
컴퓨터가 데이터를 표현하는 방식에는 정수, 실수의 표현방식이 구분된다.
이에 따라 변수의 선언 시 데이터를 표현하는 방법인 자료형의 구분이 필요하다.
*/

#include <stdio.h>

int main() {
	int num1 = 0xA7; // 16진수
	int num2 = 032; // 8진수
	float num3 = 0.0;

	//n진수 표현
	printf("%x의 10진수 정수 값: %d \n", num1);
	printf("%o의 10진수 정수 값: %d \n", num2);

	// 실수 표현의 오류
	for (int i = 0; i < 100; i++)
		num3 += 0.1;
	printf("%f \n", num3);

	// 2의 보수 식
	num2 = ~num2;
	num2 += 1;
	printf("음수로 바꾼 정수: %d \n", num2);

	//자료형의 크기
	char ch1 = 9;
	int inum = 1052;
	double dnum = 3.1415;

	printf("변수 ch1의 크기: %d \n", sizeof(ch1));
	printf("변수 inum의 크기: %d \n", sizeof(inum));
	printf("변수 dnum의 크기: %d \n", sizeof(dnum));
	printf("정수의 크기: %d \n", sizeof(7));
	printf("실수의 크기: %d \n", sizeof(3.14));
	printf("문자의 크기: %d \n", sizeof('A'));

	//아스키코드
	char ch2 = 'A', ch3 = 65;

	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);

	//데이터 형변환
	double d1 = 245;
	int i1 = 3.1415;
	int i2 = 129;
	char c = i2;
	double d2 = 2.5 * (double)i1;

	printf("정수 245를 실수로: %f \n", i1);
	printf("실수 3.1415를 정수로: %d \n", i2);
	printf("큰 정수 129를 작은 정수로: %f \n", c);
	printf("명시적 형변환의 결과: %d \n", d2);

	//자료형의 선택
	char cnum1 = 1, cnum2 = 2;
	char result = num1 + num2;
	printf("size of cnum1 & cnum1: %d, %d \n", sizeof(cnum1), sizeof(cnum2));
	printf("size of char add: %d \n", sizeof(cnum1+cnum2));
	printf("size of result: %d \n", sizeof(result));

	return 0;
}