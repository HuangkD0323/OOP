#include "bird.h"

void doRun(IAction *object)
{
	object->run();
}

void getArea(IShape *object)
{
	object->area();
}

int main()
{
	Bird* bird = new Bird();
	doRun(bird);
	getArea(bird);
	delete bird;
	return 0;
}