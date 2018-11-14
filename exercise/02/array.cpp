#include "array.h"
#include <stdexcept>

array::array(int size, double value) : n_(size), value_(value)
{
	p = new double[n_];
	for (int i=0; i<n_; i++)
	{
		*(p + i) = value;
	}
}
array::array(const array& secondArray)
{
	p = new double[secondArray.n_];
	n_ = secondArray.n_;
	value_ = secondArray.value_;
	for (int i = 0; i < secondArray.n_; i++)
	{
		*(p + i) = secondArray.value_;
	}
}
array::array() : n_(0), value_(0)
{
	p = new double[n_];
}

array::~array()
{
	delete [] p;
}
int array::size()
{
	return n_;
}
double& array::at(int i) const
{
	if (i < 0 || i >= n_)
		throw std::out_of_range("invalid index");
	return p[i];
}
 array& array::operator=(const array& secondArray)
{
	 n_ = secondArray.n_;
	 value_ = secondArray.value_;
	 p = new double[n_];
	for (int i = 0; i < secondArray.n_; i++)
	{
		*(p + i) = secondArray.value_;
	}
	return *this;
}

array::array(array&& second) noexcept
{
	p = second.p;
	n_ = second.n_;
	second.p = nullptr;
	second.n_ = 0;
}


