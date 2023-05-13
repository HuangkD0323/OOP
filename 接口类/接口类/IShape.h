#pragma once
class IShape
{
public:
	virtual int area() = 0;
	static const int MIN_AREA;
};
