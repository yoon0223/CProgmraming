/* 
printf()와 scanf()
printf() 함수는 입력받은 인자를 모니터에 출력하는 함수로,
전달인자로는 문자열, 상수, 연산값, 함수 반환값이 모두 가능하다.
이러한 전달인자의 구분을 위해서는 적절한 서식문자의 사용이 필요하다.
이와 대비되는 함수가 scanf() 함수로, 
키보드로 입력받은 데이터를 변수의 주소에 저장한다.
역시 다양한 형태의 데이터를 입력받을 수 있으므로 변수의 데이터타입 지정이 중요하다.
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
	printf("Today is %d-%d-%d \n", 2022, 1, 5); // 함수 이용하여 오늘 날짜 출력 함수로 변경
}

int AddThreeNum(int a, int b, int c) {
	int num1 = 0, num2 = 0, num3 = 0;
	return num1 + num2 + num3;
}