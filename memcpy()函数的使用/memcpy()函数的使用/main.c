/***********************************************************************************************************
*   ������C �⺯�� void *memcpy(void *str1, const void *str2, size_t n) �Ӵ洢�� str2 ���� n ���ֽڵ��洢�� str1��
*   
*   ������ memcpy() ����������:
*   void *memcpy(void *str1, const void *str2, size_t n)
*        str1 -- ָ�����ڴ洢�������ݵ�Ŀ�����飬����ǿ��ת��Ϊ void* ָ�롣
*        str2 -- ָ��Ҫ���Ƶ�����Դ������ǿ��ת��Ϊ void* ָ�롣
*         n -- Ҫ�����Ƶ��ֽ�����
* 
*   ����ֵ���ú�������һ��ָ��Ŀ��洢�� str1 ��ָ�롣
************************************************************************************************************/
 
/*ʵ��*/
// ���ַ������Ƶ����� dest ��
//�����ʵ����ʾ�� memcpy() �������÷���

/*
#include <stdio.h>
#include <string.h>

int main()
{
	const char src[50] = "http://www.runoob.com";
	char dest[50];

	memcpy(dest, src, strlen(src) + 1);
	printf("dest = %s\n", dest);

	return(0);
}
*/


//�� s �е� 11 ���ַ���ʼ�� 6�������ַ����Ƶ� d ��:


#include <stdio.h>
#include<string.h>

int main()

{
	char* s = "http://www.runoob.com";
	char d[20];
	memcpy(d, s + 11, 6);// �ӵ� 11 ���ַ�(r)��ʼ���ƣ��������� 6 ���ַ�(runoob)
	// ���� memcpy(d, s+11*sizeof(char), 6*sizeof(char));
	d[6] = '\0';
	printf("%s", d);
	return 0;
}



//����ԭ�в�������:

/*
#include<stdio.h>
#include<string.h>

int main(void)
{
	char src[] = "***";
	char dest[] = "abcdefg";
	printf("ʹ�� memcpy ǰ: %s\n", dest);
	memcpy(dest, src, strlen(src));
	printf("ʹ�� memcpy ��: %s\n", dest);
	return 0;
}
*/
