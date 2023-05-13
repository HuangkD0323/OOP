#pragma once
#include "IAction.h"
#include "IShape.h"

class Bird : public IShape,public IAction
{
public:
	Bird();
	~Bird();

public:
		void run() override;

public:
	int area() override;
};
