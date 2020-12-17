#include "stdafx.h"//这个头文件又在.C文件中有效
#include "config.h"
#define DATA_SIZE  20
//得到样例信息
message_t *get_case_space()
{
	int a = 0, b = 0;
	message_t *sectioninfo = (message_t*)malloc(sizeof(message_t));
	sectioninfo->max = GetPrivateProfileInt("message", "max", 20, CONFIG_INI);
	sectioninfo->name = GetPrivateProfileInt("message", "name", 30, CONFIG_INI);
	return sectioninfo;
}

int analyze(char* sectionaddr, int *paraandresult)//分析字符串返回相关参数和结果
{
	int i = 0,j = 0;
	char data[DATA_SIZE] = { 0 };//用来存储分析的参数字符串
	if (NULL == sectionaddr || NULL == paraandresult)
	{
		return -1;
	}
	GetPrivateProfileString(sectionaddr, "key", "", data, sizeof(data), CONFIG_INI);//得到有效字符串
	while (data[i] != '\0')//解析字符串
	{
		if (data[i] == '{' || data[i] == ' '||data[i] == ',')
			i++;
		else if (data[i] == '}')
			break;
		else
		{
			paraandresult[j] = (int)data[i]-48;
			j++;
			i++;
		}
	}
	paraandresult[j] = (int)GetPrivateProfileInt(sectionaddr, "value", 30, CONFIG_INI);//获取预期结果存入
	return 0;
}