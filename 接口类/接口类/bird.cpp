#include "bird.h"
#include <iostream>
Bird::Bird()
{
	std::cout << "С�������" << std::endl;
}

Bird::~Bird()
{
	std::cout << "С��ҵ���" << std::endl;
}

void Bird::run()
{
	std::cout << "С���ѽ��ѽ" << std::endl;
}
int Bird::area()
{
	std::cout << "С�����״��С���е���״" << std::endl;

	std::cout <<IShape::MIN_AREA << std::endl;

	return 0;
}