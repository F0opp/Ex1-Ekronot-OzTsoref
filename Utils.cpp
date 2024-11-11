#include "Utils.h"
#include "Stack.h"
#include <iostream>

using namespace std;

#define ARR_SIZE 10

/*
function reverses an array using a stack
input: int* nums - int array to be reversed, unsigned int size - the size of the array 
output: none
*/
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

/*
function requests 10 numbers from user and inputs them into an array in reverse
input: none
output: a flipped int array of the numbers it recived from the user
*/
int* reverse10()
{
	int i = 0;
	int* nums = new int[ARR_SIZE];
	std::cout << "Please enter ten numbers: " << std::endl;

	for (i = 0; i < ARR_SIZE; i++)
	{
		std::cin >> nums[i];
	}

	reverse(nums, ARR_SIZE);
	return (nums);
}