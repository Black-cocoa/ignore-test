#include <stdio.h>
#include <stdlib.h>
#include "test.h"
#define _CRT_SECURE_NO_WARNINGS
int main(void) 
{
	int a = 10, b = 20,c = 0;
	c = add(a, b);
	printf("%d\n", c);
	system("pause");
}