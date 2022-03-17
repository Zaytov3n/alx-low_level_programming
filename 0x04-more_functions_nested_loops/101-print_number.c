 #include "main.h"
 void print_integer(int m);

 /**
  * print_number - a function that prints an integer.
  * @n: An input integer
  * Return: Nothing
  */
 void print_number(int n)
 {
 	unsigned int num = n;

 	if (n < 0)
 	{
 		_putchar('-');
 		num = -num;
 	}

 	if ((num / 10) > 0)
 		print_number(num / 10);

 	_putchar((num % 10) + '0');
 }
