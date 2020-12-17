#include <stdio.h>
#include <stdlib.h>
#include "windows.h"/*包含ini文件操作的API*/
#include "test.h"
#define _CRT_SECURE_NO_WARNINGS
//#define CONFIG_INI  "F:\\VS\\sourcetest\\sourcetest\\UnitTest1\\Text.ini"
int main(void) 
{
	int *p = NULL;
	int a = 10, b = 20,c = 0;
	p = &a;
	c = add(a, b);
	printf("%d\n", c);
	//UINT a = 0, b = 0, c = 0;
	//a = GetPrivateProfileInt("1Section", "value", 20, CONFIG_INI);
	//b = GetPrivateProfileInt("2Section", "value", 30, CONFIG_INI);
	//printf("a = %d,b = %d\n", a, b);
	//// TODO: 在此输入测试代码
	system("pause");
}