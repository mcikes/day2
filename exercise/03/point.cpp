#include "point.h"
point::point(int x, int y)
{
	x_ = x;
	y_ = y;
}


bool point::operator==(const point& p)
{
	return x_ == p.x_ && y_ == p.y_;
}

bool point::operator!=(const point& p)
{
	return  x_ != p.x_ || y_ != p.y_;
}
bool point::operator < (const point &p)
{
	if (x_ < p.x_) return true;
	if(p.x_==x_)
	{
		return y_ < p.y_;
	}
	return false;
}

