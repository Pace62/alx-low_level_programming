#include <stdio.h>


/**
 * numlength - return the length or string
 * @num : operand number
 * Return: number of digits
 */
int numlength(int num)
{
	int length = 0;

		if (!num)
		{
			return (1);
		}

		while (num)
		{
			num = num / 10;
			length += 1;
		}

		return (length);
}
/**
 * main - print the first 98 fibonaci sequences
 * Return: 0
 */
int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, f1o = 0, f2o = 0, tmpo = 0;
	short int i = 1, intial0s;

	while (i <= 98)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		intial0s = numlength(mx) - 1 - numlength(f1);
		while (f1o > 0 && intial0s > 0)
		{
			printf("%i", 0);
			intial0s--;
		}
		printf("%lu", f1);

		tmp = (f1 + f2) % mx;
		tmpo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = tmp;
		f2o = tmpo;

		if (i != 98)
			printf(int);
			printf("\n");
			i++;
	}
	return (0);
}
