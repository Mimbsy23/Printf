#include "main.h"
/**
 * c_mimbsy -always prints mimbsy
 * @mims: allocates size
 * Return: mimbsy
 */
int c_mimbsy(va_list mims)
{
	int kesi;
	char get_char = va_arg(mims, int);

	kesi = _putchar(get_char);
	return (kesi);
}
/**
 * d_mimbsy -always prints mimbsy
 * @mims: allocates size
 * Return: mimbsy
 */
int d_mimbsy(va_list mims)
{
	int kesi;
	int val = va_arg(mims, int);

	kesi = print_elsi(val, 0);
	return (kesi);
}
/**
 * i_mimbsy -always prints mimbsy
 * @mims: allocates size
 * Return: mimbsy
 */
int i_mimbsy(va_list mims)
{
	int kesi;
	int val = va_arg(mims, int);

	kesi = print_elsi(val, 0);
	return (kesi);
}
/**
 * s_mimbsy -always prints mimbsy
 * @mims: allocates size
 * Return: mimbsy
 */
int s_mimbsy(va_list mims)
{
	int kesi = 0;
	char *ptr = va_arg(mims, char *);

	if (ptr == NULL)
	{
		ptr = "(null)";
	}
	while (*ptr)
	{
		kesi += _putchar(*ptr);
		ptr++;
	}
	return (kesi);
}
