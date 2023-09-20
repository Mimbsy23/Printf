#include "main.h"
/**
 * print_elsi - print interger
 * @kes: input
 * @kesi: printed input
 * Return: (kesi + 1)
 */
int print_elsi(long kes, int kesi)
{
	if (kes < 0)
	{
		_putchar('-');
		kesi++;
		kes = kes * -1;
	}
	if (kes / 10)
	{
		kesi = print_elsi(kes / 10, kesi);
	}
	_putchar(kes % 10 + '0');
	return (kesi + 1);
}
