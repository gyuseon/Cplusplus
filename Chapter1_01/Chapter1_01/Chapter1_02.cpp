#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	int a = 5;
	double b = 5.5;
	char str[10] = "1000";
	char tmp[10] = { 0 };
	printf("a+str = %d\n", a + atoi(str)); // 문자열 -> 정수형
	printf("b+str = %.2f\n", b + atof(str)); // 문자열 -> 실수형
	_itoa_s(a, tmp, 10);
	printf("%s\n", str); 
	return 0;
}

//void main() {
//	int a, b;
//	printf("첫번쨰 값을 입력하세요 : ");
//	scanf_s("%d", &a);
//	printf("두번쨰 값을 입력하세요 : ");
//	scanf_s("%d", &b);
//	printf("덧셈결과 = %d\n", a + b);
//	printf("나머지결과 = %d\n", a % b);
//	printf("음수덧셈결과 = %d\n", -a + b);
//	printf("a의 증가값 = %d\n", a+1);
//
// }


