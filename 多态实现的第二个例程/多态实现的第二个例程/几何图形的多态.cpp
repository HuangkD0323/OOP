/********************************************************************************************************************************
*     @problem:��������һ��ʹ��C++��̬ʵ�ֵ����̣�չʾ�˼���ͼ�Σ�Shape�������������Բ�Σ�Circle���;��Σ�Rectangle��֮��Ķ�̬��
*
*     @Analysis:������ʾ���У�Shape���ǻ��࣬Circle���Rectangle���������ࡣShape���е�calculateArea����������Ϊ�麯����
*				�����������н�������д
*
*				���������У�ͨ��Shape���ָ��shapePtr�ֱ�ָ��Circle��Ķ����Rectangle��Ķ��󣬲�ͨ����ָ�����calculateArea������
*				����calculateArea�������麯�����������������н�������д������ͨ������ָ�����calculateArea����ʱ��
*				ʵ���ϵ��õ�������������д�İ汾��ʵ���˶�̬�ԡ�
* 
*	  @return:  ���������ֱ���ʾ "Circle Area: 78.5" �� "Rectangle Area: 24"��������Ϊ����������д��calculateArea��������ȷ���ã�
*				�ֱ������Բ�κ;��ε����
* 
* 
*	  @return:	�������չʾ��ʹ��C++��̬�Ե���һ�����ӣ�ͨ������ָ����麯����ʵ����������ʱ��̬�󶨲�ͬ������ĺ�����
				�Ա㴦��ͬ���͵ļ���ͼ�Σ�
*				���������ǵ������ϣ����������ܰ�������õ�����̬�Եĸ�����÷���
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
