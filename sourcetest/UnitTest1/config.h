#pragma once
#include "../sourcetest/test.h"
#include "windows.h"
#include <cstring>
#include <stdio.h>
#define CONFIG_INI "F:\\VS\\sourcetest\\sourcetest\\UnitTest1\\Text.ini"
//#define CONFIG_INI "..\\Debug\\Text.ini"
struct message      //�ļ���ÿ���ڵ��������Ϣ
{
	char name[20];
	int age;
};
struct message_t   //�ļ������нڵ�Ĺ�����Ϣ
{
	int max;
	int name;
};
struct initdate    //������Ԫ���Եĳ�ʼ��Ϣ
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
int analyze(char* sectionaddr, int *paraandresult);//�����ַ���������ز����ͽ��
//result_t test_section(char *sectionname, char *keyname);

