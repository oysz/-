#pragma once
#include <iostream>
#include "point.h"
using namespace std;
class circle
{
public:
	void getr(int r);

		int putr();

		void getcenter(point center);

		point putcenter();
	
private:
	int m_r;
	point m_center;
};