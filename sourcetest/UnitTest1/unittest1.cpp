#include "windows.h"/*����ini�ļ�������API*/
#include "stdafx.h"
#include "CppUnitTest.h"
#include "../sourcetest/test.h"
#include "config.h"
#define SECTION_LEN 50
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int paraandresult[5];
			char samplenode[SECTION_LEN] = { 0 };//���Խڵ���
			message_t * section = get_case_space();//�õ����������ļ��нڵ�ķ�Χ�ͽڵ���
			for (int i = 1;i < section->max+1; ++i)
			{
				memset(&paraandresult, 0, sizeof(paraandresult));
				memset(samplenode, 0, sizeof(samplenode));
				sprintf(samplenode, "Section%d", i);
				analyze(samplenode, paraandresult);
				Assert::AreEqual(paraandresult[4], (int)GetPrivateProfileInt(samplenode, "value", 20, CONFIG_INI));
				Assert::AreEqual(paraandresult[4], adds(paraandresult[0], paraandresult[1], paraandresult[2], paraandresult[3]));
			}
			free(section);
			section = NULL;
		}
	};
}