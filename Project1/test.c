#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[4] = { "abc"};//数组大小放4时后面能自动放个\0，输出为3
	int c = 0;
	c=strlen(arr1);
	printf("%d", c);

	return 0;

}
int main()
{
	char arr1[3] = { "abc" };//数组大小放3时后面不能自动放个\0，放不下了，输出为随机
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
//strlen(str) : 获取字符串中有效字符的个数，不算'\0'，因此总共9个有效字符
//sizeof(str)：获取数组的总大小，10个元素，每个元素占1个字节，因此总共是10个字节，字符串后自动放入的\0也被计算再内.
//sizeof是一个操作符，而strlen是库函数，只求字符串长度。
//sizeof的参数可以是数据的类型，也可以是变量，而strlen只能以结尾为'\0'的字符串作参数。
//编译器在编译时就计算出了sizeof的结果，而strlen必须在运行时才能计算出来。
//sizeof计算数据类型占内存的大小，strlen计算字符串实际长度。