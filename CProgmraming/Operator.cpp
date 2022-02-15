/*
변수와 연산자
연산을 위해서는 변수와 연산자가 필요하다.
변수는 데이터를 저장할 수 있는 메모리의 이름으로, 선언과 초기화가 필요하다.
변수와 적절한 연산자를 통해 컴퓨터는 연산한다.
*/

#include <stdio.h>

int main() {
	int num1 = 9, num2 = 2, num3 = 6;
	int result1, result2, result3, result4, result5, result6;

	//기본연산자
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d x %d = %d \n", num1, num2, num1 * num2);
	printf("%d 나누기 %d = %d \n", num1, num2, num1 / num2);
	printf("%d 나누기 %d의 나머지 = %d \n", num1, num2, num1 % num2);

	//복합대입연산자
	num1 += 3;
	num2 *= 4;
	num3 %= 5;
	printf("9 + 3 = %d \n", num1);
	printf("2 * 4 = %d \n", num2);
	printf("6 % 5 = %d \n", num3);

	//증가연산자
	num1 = 10;
	num2 = (num1++) + 2;
	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++);
	printf("num1: %d \n", num1);

	//감소연산자
	num1 = 10;
	num2 = (num1--) + 2;
	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);

	//관계연산자
	result1 = (num1 == num2);
	result2 = (num1 <= num2);
	result3 = (num1 > num2);
	printf("result: %d, %d, %d= \n", result1, result2, result3);

	//논리연산자
	result4 = (num1 == 9 && num2 == 12);
	result5 = (num1 < 12 || num2>12);
	result6 = (!num1);
	printf("result: %d, %d, %d \n", result4, result5, result6);

	//비트연산자
	printf("AND 연산의 결과: %d \n", num1 & num2);
	printf("OR 연산의 결과: %d \n", num1 | num2);
	printf("XOR 연산의 결과: %d \n", num1 ^ num2);
	printf("not 연산의 결과: %d \n", ~num1);
	printf("좌측 이동 연산의 결과: %d \n", num1 << 1);
	printf("우측 이동 연산의 결과: %d \n", num1 >> 1);

	return 0;
}