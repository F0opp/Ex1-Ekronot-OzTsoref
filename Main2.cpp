#include <iostream>
#include "Stack.h"

int main()
{
	Stack s;

	initStack(&s);

	push(&s, 10);
	push(&s, 20);
	push(&s, 30);

	cleanStack(&s);

	return 0;
}
