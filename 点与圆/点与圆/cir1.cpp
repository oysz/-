#include "circle.h"

	void circle::getr(int r)
	{
		m_r = r;
	}
	int circle::putr()
	{
		return m_r;
	}
	void circle::getcenter(point center)
	{
		m_center = center;
	}
	point circle::putcenter()
	{
		return m_center;
	}
