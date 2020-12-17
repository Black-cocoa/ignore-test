#include "stdafx.h"//���ͷ�ļ�����.C�ļ�����Ч
#include "config.h"
#define DATA_SIZE  20
//�õ�������Ϣ
message_t *get_case_space()
{
	int a = 0, b = 0;
	message_t *sectioninfo = (message_t*)malloc(sizeof(message_t));
	sectioninfo->max = GetPrivateProfileInt("message", "max", 20, CONFIG_INI);
	sectioninfo->name = GetPrivateProfileInt("message", "name", 30, CONFIG_INI);
	return sectioninfo;
}

int analyze(char* sectionaddr, int *paraandresult)//�����ַ���������ز����ͽ��
{
	int i = 0,j = 0;
	char data[DATA_SIZE] = { 0 };//�����洢�����Ĳ����ַ���
	if (NULL == sectionaddr || NULL == paraandresult)
	{
		return -1;
	}
	GetPrivateProfileString(sectionaddr, "key", "", data, sizeof(data), CONFIG_INI);//�õ���Ч�ַ���
	while (data[i] != '\0')//�����ַ���
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
	paraandresult[j] = (int)GetPrivateProfileInt(sectionaddr, "value", 30, CONFIG_INI);//��ȡԤ�ڽ������
	return 0;
}