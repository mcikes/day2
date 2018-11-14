// do not use standard container as member or base class
#pragma once

class array
{
	double* p, value_;
	int n_;

public:
	array();
	array(int size, double value);
	array(const array& secondArray);
	array(array && second) noexcept;
	~array();
	int size();
	double& at(int i) const;
	array& operator=(const array& secondArray);
};
