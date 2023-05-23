/*************************************************************************************************************************
*代码要解决的问题：以下是一个使用C++多态实现的完整例程，展示了动物（Animal）基类和派生类狗（Dog）和猫（Cat）之间的多态性：
* 
*在上述示例中，Animal类是基类，Dog类和Cat类是派生类。Animal类中的makeSound函数被声明为虚函数，并在派生类中进行重写。
*在主函数中，通过Animal类的指针animalPtr分别指向Dog类的对象和Cat类的对象，并通过该指针调用makeSound函数。
*由于makeSound函数被声明为虚函数，并且在派生类中进行了重写，所以通过基类指针调用makeSound函数时，实际上调用的是派生类中重写的版本，实现了多态性。
*输出结果将分别显示 "Dog barks." 和 "Cat meows."，这是因为派生类中重写的makeSound函数被正确调用。
*这个例程展示了C++中多态性的基本原理和用法，通过继承、虚函数和基类指针的组合，实现了运行时的动态绑定和多态性。
***************************************************************************************************************************/
#include <iostream>

using namespace std;

class Animal
{
public:
	virtual void  makeSound()
	{
		cout << "Animal makes a sound." << endl;
	}
};
class Dog :public Animal
{
public:
	void makeSound() override
	{
		cout << "Dog barks." << endl;
	}
};

class Cat :public Animal
{
public:
	void makeSound() override
	{
		cout << "Cat meows." << endl;
	}
};

int main()
{
	Animal* animalPtr;

	Dog dog;
	Cat cat;

	// 使用基类指针调用派生类对象的虚函数，实现多态
	animalPtr = &dog;
	animalPtr->makeSound();// 调用Dog类中重写的makeSound函数

	animalPtr = &cat;
	animalPtr->makeSound();// 调用Cat类中重写的makeSound函数

	return 0;
}