#include "Utils.h"
#include "Stack.h"
#include <iostream>

using namespace std;

#define ARR_SIZE 10

void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack s;
	initStack(&s);

	for (i = 0; i < size; i++)
	{
		push(&s, nums[i]);
	}

	for (i = 0; i < size; i++)
	{
		nums[i] = pop(&s);
	}
}

int* reverse10()
{
	int i = 0;
	int* nums = new int[ARR_SIZE];
	std::cout << "Please enter ten numbers: " << std::endl;

	for (i = 0; i < ARR_SIZE; i++)
	{
		std:cin >> nums[i];
	}

	reverse(nums, ARR_SIZE);
	return (nums);
}