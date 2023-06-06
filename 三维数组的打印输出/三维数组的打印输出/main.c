#include <stdio.h>

int main()
{
	char a[2][2][3] = { { {1,6,3},{5,4,15} },{ { 3,5,33 }, { 23,12,7 } } };

	char* p;
	p = &a[0][0][0];

	for (int i = 0; i < 12; i++)
	{
		printf("%d", *(p++));
	}
}