#include "framework.h"
#include <stddef.h> // NULL を定義

#include "../include/my_lib.h"

int sum(int num, int* array)
{
	int sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += array[i];
	}
	return sum;
}

int average(int num, int* array)
{
	if (num <= 0 || array == NULL)
	{
		return 0;
	}
	int total = sum(num, array);
	return total / num;
}