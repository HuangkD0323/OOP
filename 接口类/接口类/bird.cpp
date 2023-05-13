#include "bird.h"
#include <iostream>
Bird::Bird()
{
	std::cout << "小鸟出生了" << std::endl;
}

Bird::~Bird()
{
	std::cout << "小鸟挂掉了" << std::endl;
}

void Bird::run()
{
	std::cout << "小鸟飞呀飞呀" << std::endl;
}
int Bird::area()
{
	std::cout << "小鸟的形状像小鸡仔的形状" << std::endl;

	std::cout <<IShape::MIN_AREA << std::endl;

	return 0;
}