/*这段代码定义了一个名为 Point 的类，表示二维平面上的一个点，具有 x 和 y 坐标。Point 类的构造函数使用了 explicit 关键字，禁止了隐式类型转换。*/

#include <iostream>

using namespace std;

class Point {
public:
    int x, y;
    explicit Point(int x = 0, int y = 0)/*使用 explicit 关键字声明了 Point 类的构造函数，禁止了隐式类型转换。*/
        : x(x), y(y) {}
};

void displayPoint(const Point& p)
{
    cout << "(" << p.x << "," << p.y << ")" << endl;
}

int main()
{
    displayPoint(Point(1));/*调用 displayPoint() 函数，输出一个临时创建的 Point 对象的坐标。*/
    Point p(1);/*创建一个名为 p 的 Point 对象，并通过显式调用构造函数进行初始化。*/
}