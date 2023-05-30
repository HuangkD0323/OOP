/*
* 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void getmemory(char** p)
{
	*p = (char*)malloc(100);
	strcpy_s(*p,100,"hello world");
}

int main()
{
	char* str = NULL;
	getmemory(&str);
	printf("%s\n",str);
	free(str);
	return 0;
}



#include <stdio.h>
#include <string.h>

int main()
{
	char szstr[11];
	strcpy_s(szstr,sizeof(szstr),"0123456789");
	printf("%s\n", szstr);
	return 0;
}
*/

#include <stdio.h>
struct MyStruct
{
		char str;
		short x;
		int num;
};

int main()
{
	struct MyStruct obj;
	size_t size = sizeof(obj);

	printf("Size of struct MyStruct: %zu bytes\n",size);

	return 0;
}




