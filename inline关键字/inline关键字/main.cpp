/*��ʹ�� inline �ؼ���ʱ�����������ܻὫ�����Ķ���ֱ�Ӳ��뵽���ô�������ߴ����ִ��Ч��*/
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

	//����add()����
	int sum = add(x, y);

	cout << "Sum:" << sum << endl;
}

/*������������У�add() ����������Ϊ inline���������������ܻὫ�����Ķ�����뵽 main() �����е��� add() �ĵط���

�������ڱ���ʱ���ܻὫ�����Ż�Ϊ����������ʽ��
int main() {
	int x = 5;
	int y = 10;

	// �� add() �����Ķ���ֱ�Ӳ��뵽���ô�
	int sum = x + y;

	std::cout << "Sum: " << sum << std::endl;

	return 0;
}*/