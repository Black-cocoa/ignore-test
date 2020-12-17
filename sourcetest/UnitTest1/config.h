#pragma once
#include "../sourcetest/test.h"
#include "windows.h"
#include <cstring>
#include <stdio.h>
#define CONFIG_INI "F:\\VS\\sourcetest\\sourcetest\\UnitTest1\\Text.ini"
//#define CONFIG_INI "..\\Debug\\Text.ini"
struct message      //文件中每个节点包含的信息
{
	char name[20];
	int age;
};
struct message_t   //文件中所有节点的共有信息
{
	int max;
	int name;
};
struct initdate    //传个单元测试的初始信息
{
	message_t info;
};

struct parameterandresult
{
	int a;
	int b;
	int c;
	int d;
	int e;
};
message_t *get_case_space(void);
int analyze(char* sectionaddr, int *paraandresult);//分析字符串返回相关参数和结果
//result_t test_section(char *sectionname, char *keyname);

