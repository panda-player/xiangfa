#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[4] = { "abc"};//�����С��4ʱ�������Զ��Ÿ�\0�����Ϊ3
	int c = 0;
	c=strlen(arr1);
	printf("%d", c);

	return 0;

}
int main()
{
	char arr1[3] = { "abc" };//�����С��3ʱ���治���Զ��Ÿ�\0���Ų����ˣ����Ϊ���
	int c = 0;
	c = strlen(arr1);
	printf("%d", c);

	return 0;

}
#include <stdio.h>
int main()
{
	char str[] = "hello bit";
	printf("%d %d\n", sizeof(str), strlen(str));
	return 0;
}
//strlen(str) : ��ȡ�ַ�������Ч�ַ��ĸ���������'\0'������ܹ�9����Ч�ַ�
//sizeof(str)����ȡ������ܴ�С��10��Ԫ�أ�ÿ��Ԫ��ռ1���ֽڣ�����ܹ���10���ֽڣ��ַ������Զ������\0Ҳ����������.
//sizeof��һ������������strlen�ǿ⺯����ֻ���ַ������ȡ�
//sizeof�Ĳ������������ݵ����ͣ�Ҳ�����Ǳ�������strlenֻ���Խ�βΪ'\0'���ַ�����������
//�������ڱ���ʱ�ͼ������sizeof�Ľ������strlen����������ʱ���ܼ��������
//sizeof������������ռ�ڴ�Ĵ�С��strlen�����ַ���ʵ�ʳ��ȡ�