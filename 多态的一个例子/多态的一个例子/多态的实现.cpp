/*************************************************************************************************************************
*����Ҫ��������⣺������һ��ʹ��C++��̬ʵ�ֵ��������̣�չʾ�˶��Animal������������๷��Dog����è��Cat��֮��Ķ�̬�ԣ�
* 
*������ʾ���У�Animal���ǻ��࣬Dog���Cat���������ࡣAnimal���е�makeSound����������Ϊ�麯���������������н�����д��
*���������У�ͨ��Animal���ָ��animalPtr�ֱ�ָ��Dog��Ķ����Cat��Ķ��󣬲�ͨ����ָ�����makeSound������
*����makeSound����������Ϊ�麯�����������������н�������д������ͨ������ָ�����makeSound����ʱ��ʵ���ϵ��õ�������������д�İ汾��ʵ���˶�̬�ԡ�
*���������ֱ���ʾ "Dog barks." �� "Cat meows."��������Ϊ����������д��makeSound��������ȷ���á�
*�������չʾ��C++�ж�̬�ԵĻ���ԭ����÷���ͨ���̳С��麯���ͻ���ָ�����ϣ�ʵ��������ʱ�Ķ�̬�󶨺Ͷ�̬�ԡ�
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

	// ʹ�û���ָ����������������麯����ʵ�ֶ�̬
	animalPtr = &dog;
	animalPtr->makeSound();// ����Dog������д��makeSound����

	animalPtr = &cat;
	animalPtr->makeSound();// ����Cat������д��makeSound����

	return 0;
}