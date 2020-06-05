// Chapter1_01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h> /* C 기본 입출력*/

//void main()
//{
//	char M, N;
//	M = 'B';
//	N = 'e';
//	printf("%c\n",M);
//	printf("%c\n", N);
//		
//}

void main()
{
	/*char H, S;
	H = 65;
	S = 97;
	printf("%c\n", H);
	printf("%c\n", S);
	H = 'z';
	S = 'Z';
	printf("%c\n", H);
	printf("%c\n", S);
*/
	//float S, W;
	//S = 32.4;
	//W = 2143242345.5;
	//printf("%f\n%f\n", S, W);

	//float circum, area;
	//const float PI = 3.141592; //상수값
	//float radius = 25;
	//area = PI * radius*radius;
	//circum = 2 * PI*radius;
	//printf("Area of circle is : %f\n", area);
	//printf("Circum of circle is  : %f\n", circum);

	/*int i, j;
	float k;
	char ch;
	i = 100;
	j = 200;
	k = 12.345;
	ch = 'A';
	printf("%d,%d\n",i, i + j);
	printf("%f\n",k);
	printf("%c%d\n",ch, ch);
*/
	//char k, b, s;
	//k = 'k';
	//b = 66;
	//s = 's';
	//printf("%c,%c,%c\n",k, b, s);
	//printf("%d,%d,%d", k, b, s);

	
	/*float i;
	i =3.141592;
		printf("%15f\n",i);
		printf("%-15f\n", i);
		printf("%15.3f\n", i);*/

	//char ch = 'A';
	//printf("character=%c, ascii=%d\n",ch,ch);
	//printf("\n");
	//int t;
	//t = 123456789;
	//printf("%12d\n", t);
	//printf("%-3d%-3d%-3d\n",12,34,56);
	//printf("%3d%3d\n", 12, 34);
	//printf("%03d%3d\n", 3, 160);
	//printf("the  ""end \n");


	/*scanf_s : double(lf), float:f, int:d, 문자열 :s */
	//int java, c, tot;
	//printf("JAVA : ");
	//scanf_s("%d", &java); // 표준 입력 &:메모리에 접근
	//printf("C : ");
	//scanf_s("%d", &c);
	//tot = java + c;
	//printf("총점은 %d 입니다\n", tot);

	/*int 가로, 세로,넓이,이름;
	printf("사각형의 가로길이 :");
	scanf_s("%d", &가로);
	printf("사각형의 세로길이 :");
	scanf_s("%d", &세로);
	넓이 = 가로 * 세로;
	printf("사각형 넓이=  %d\n", 넓이);
	printf("==========================\n");
	printf("이름을 입력하세요 : ");
	scanf_s("%d", &이름);*/

	/*int 밑변, 높이;
	printf("밑변을 입력 하시오 : ");
	scanf_s("%d", &밑변);
	printf("높이를 입력 하시오 : ");
	scanf_s("%d", &높이);
	
	float 넓이 = 밑변 * 높이 / 2.0;
	printf("삼각형의 넓이 : ");
	printf("%.2f\n", 넓이);
	printf("삼각형의 둘레 : ");
	printf("%.2d", 밑변+밑변+밑변);
*/
	printf("이름을 입력하세요 : ");
	char irum[10];
	scanf_s("%s\n", irum, sizeof(irum));
	printf("성명 : %s\n", irum);

}


