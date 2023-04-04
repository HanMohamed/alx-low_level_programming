#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: answer
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - sub two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: answer
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiply two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: answer
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: answer
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - get mod of two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: answer
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
