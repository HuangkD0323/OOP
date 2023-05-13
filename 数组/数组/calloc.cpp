#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
	int* p = (int*)calloc(10,sizeof(int));
	if (p == NULL)
	{
		char errMsg[256];
		strerror_s(errMsg,sizeof(errMsg),errno);
		printf("calloc() failed£º%s\n",errMsg);
	
		/*printf("%s\n",strerror(errno));*/
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			printf("%d",*(p + i));
		}
	}
	free(p);
	p = NULL;
	return 0;
}
