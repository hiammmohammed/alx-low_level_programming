int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
 /**
  * op_add - Returns the sum of two numbers.
  * @a: The frist number
  * @b: The second number
  *
  *Return: The sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}
 /**
  * op_sub - Return the difference of two numbers
  * @a: The frist number
  * @b: The second number
  *
  * Return: The difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul Rturns the product of two numbers
 * @a: The frist number
 * @b: The second number
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div Rturns the division of two numbers
 * @a: The frist number
 * @b: The second number
 *
 * Return: The quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod Rturns the remainder of the division of two numbers
 * @a: The frist number
 * @b: The second number
 *
 * Return: The remainder of the division of a by b
 */
{
	return ( a % b);
}
