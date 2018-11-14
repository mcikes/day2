#pragma once


class color
{
	double red_, blue_, green_ ;
public:
	color();
	color(double red, double blue, double green);
	color(const color& color);
	double get_red() const;
	double get_green() const;
	double get_blue() const;
	void set_red(double red);
	void set_blue(double blue);
	void set_green(double green);
	COLORREF get_color_ref();
	bool operator==(const color& other) const;
	double get_luminance();
};
