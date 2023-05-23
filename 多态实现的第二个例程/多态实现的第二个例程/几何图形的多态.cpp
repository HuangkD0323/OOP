/********************************************************************************************************************************
*     @problem:以下是另一个使用C++多态实现的例程，展示了几何图形（Shape）基类和派生类圆形（Circle）和矩形（Rectangle）之间的多态性
*
*     @Analysis:在上述示例中，Shape类是基类，Circle类和Rectangle类是派生类。Shape类中的calculateArea函数被声明为虚函数，
*				并在派生类中进行了重写
*
*				在主函数中，通过Shape类的指针shapePtr分别指向Circle类的对象和Rectangle类的对象，并通过该指针调用calculateArea函数。
*				由于calculateArea函数是虚函数，并且在派生类中进行了重写，所以通过基类指针调用calculateArea函数时，
*				实际上调用的是派生类中重写的版本，实现了多态性。
* 
*	  @return:  输出结果将分别显示 "Circle Area: 78.5" 和 "Rectangle Area: 24"，这是因为派生类中重写的calculateArea函数被正确调用，
*				分别计算了圆形和矩形的面积
* 
* 
*	  @return:	这个例程展示了使用C++多态性的另一个例子，通过基类指针和虚函数，实现了在运行时动态绑定不同派生类的函数，
				以便处理不同类型的几何图形，
*				并计算它们的面积。希望这个例程能帮助你更好地理解多态性的概念和用法。
*********************************************************************************************************************************/
#include <iostream>

using namespace std;

class Shape
{
public:
	virtual float calculateArea()
	{
		return 0.0;
	}
};

class Circle :public Shape
{
private:
	float radius;

public:
	Circle(float r):radius(r){}

	float calculateArea() override 
	{
		return 3.14 * radius * radius;
	}
};

class Rectangle : public Shape
{
private:
	float width;
	float height;

public:
	Rectangle(float w, float h) :width(w), height(h) {}

	float calculateArea() override
	{
		return width * height;
	}
};

int main()
{
	Shape* shapePtr;

	Circle circule(5.0);

	Rectangle rectangle(4.0,6.0);

	shapePtr = &circule;
	cout << "Circle Area:" << shapePtr->calculateArea() <<endl;

	shapePtr = &rectangle;
	cout << "Rectangle Area:" << shapePtr->calculateArea() <<endl;
}
