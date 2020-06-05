#pragma once


#include<iostream>
#include<cstring>
#include<math.h>

using namespace std;

class weight
{
private:
	char customer_irum[20];
	int customer_height;
	int customer_weight;
	double customer_opt;
	int gender;

public:
	void calc_stweight(int h, int w);
	void calc_info(char *irum, int a);
	void print();
	// inline 함수도 여기서 선언 inline void age();
};