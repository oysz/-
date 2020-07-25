#include <iostream>
#include <string>
#include "circle.h"
#include "point.h"
using namespace std;
//class point
//{
//public:
//	void getx(int x)
//	{
//		m_x = x;
//	}
//	int putx()
//	{
//		return m_x;
//	}
//	void gety(int y)
//	{
//		m_y = y;
//	}
//	int puty()
//	{
//		return m_y;
//	}
//private:
//	int m_x;
//	int m_y;
//};
////class circle
////{
//public:
//	void getr(int r)
//	{
//		m_r = r;
//	}
//	int putr()
//	{
//		return m_r;
//	}
//	void getcenter(point center)
//	{
//		m_center = center;
//	}
//	point putcenter()
//	{
//		return m_center;
//	}
//private:
//	int m_r;
//	point m_center;
//};

void isincircle(circle &c, point &p)
{
	
	int dis = (c.putcenter().putx() - p.putx())*(c.putcenter().putx() - p.putx()) +
		(c.putcenter().puty() - p.puty())*(c.putcenter().puty() - p.puty());
		int rdis = c.putr()*c.putr();
		if (rdis == dis)
		{
			cout << "点在圆上" << endl;
		}
		else if (rdis > dis)
		{
			cout << "点在圆内" << endl;
		}
		else
		{
			cout << "点在圆外" << endl;
		}
}
int main()
{
	circle c;
	c.getr(10);
	point center;
	center.getx(10);
	center.gety(0);
	c.getcenter(center);


	point p;
	p.getx(10);
	p.gety(10);


	isincircle(c, p);
	system("pauce");
		return 0;
}