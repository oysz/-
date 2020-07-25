#pragma once
#include <iostream>
using namespace std;
class point
{
public:
	void getx(int x);

		int putx();

		void gety(int y);

		int puty();
	
private:
	int m_x;
	int m_y;
};