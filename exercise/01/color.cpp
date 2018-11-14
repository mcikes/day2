#include "stdafx.h"
#include "color.h"

color::color()
{
	red_ = 0.;
	blue_ = 0.;
	green_ = 0.;
}


color::color(double red, double green, double blue)
{
	red_ = red;
	blue_ = blue;
	green_ = green;
}

color::color(const color& color)
{
	red_ = color.red_;
	blue_ = color.blue_;
	green_ = color.green_;
}

double color::get_red() const
{
	return std::clamp(red_, 0.0, 1.0);
}

double color::get_green() const
{
	return std::clamp(green_, 0.0, 1.0);
}

double color::get_blue() const
{
	return std::clamp(blue_, 0.0, 1.0);
}

void color::set_red(double red)
{
	red_ = red;
}
void color::set_blue(double blue)
{
	blue_ = blue;
}
void color::set_green(double green)
{
	green_ = green;
}

COLORREF color::get_color_ref()
{
	return RGB(red_ * 255, green_ * 255, blue_ * 255);
}
double color::get_luminance()
{
	return  0.2126 * red_ + 0.7152 * green_ + 0.0722* blue_;
}

bool color::operator==(const color& second) const
{
	return red_ == second.red_ &&  green_ == second.green_ && blue_ == second.blue_;
}




