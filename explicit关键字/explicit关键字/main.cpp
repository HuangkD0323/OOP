/*��δ��붨����һ����Ϊ Point ���࣬��ʾ��άƽ���ϵ�һ���㣬���� x �� y ���ꡣPoint ��Ĺ��캯��ʹ���� explicit �ؼ��֣���ֹ����ʽ����ת����*/

#include <iostream>

using namespace std;

class Point {
public:
    int x, y;
    explicit Point(int x = 0, int y = 0)/*ʹ�� explicit �ؼ��������� Point ��Ĺ��캯������ֹ����ʽ����ת����*/
        : x(x), y(y) {}
};

void displayPoint(const Point& p)
{
    cout << "(" << p.x << "," << p.y << ")" << endl;
}

int main()
{
    displayPoint(Point(1));/*���� displayPoint() ���������һ����ʱ������ Point ��������ꡣ*/
    Point p(1);/*����һ����Ϊ p �� Point ���󣬲�ͨ����ʽ���ù��캯�����г�ʼ����*/
}