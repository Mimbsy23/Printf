#include "main.h"
/**
 * selector - fomates the ut put
 * @str: input strings
 * Return: always (0)
 */

int (*selector(char str))(va_list mims)
{
	if (str == 'c')
	{
		return (&c_mimbsy);
	}
	else if (str == 'd')
	{
		return (&d_mimbsy);
	}
	else if (str == 'i')
	{
		return (&i_mimbsy);
	}
	else if (str == 's')
	{
		return (&s_mimbsy);
	}
	return (0);
}
