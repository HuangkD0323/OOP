/*当使用 inline 关键字时，编译器可能会将函数的定义直接插入到调用处，以提高代码的执行效率*/
#include <iostream>

using namespace std;

inline int add(int a, int b)
{
	return a + b;
}

int main()
{
	int x = 5;
	int y = 10;

	//调用add()函数
	int sum = add(x, y);

	cout << "Sum:" << sum << endl;
}

/*在上面的例程中，add() 函数被声明为 inline，这样编译器可能会将函数的定义插入到 main() 函数中调用 add() 的地方。

编译器在编译时可能会将代码优化为类似以下形式：
int main() {
	int x = 5;
	int y = 10;

	// 将 add() 函数的定义直接插入到调用处
	int sum = x + y;

	std::cout << "Sum: " << sum << std::endl;

	return 0;
}*/