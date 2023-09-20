#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int print_elsi(long kes, int kesi);
int c_mimbsy(va_list mims);
int d_mimbsy(va_list mims);
int i_mimbsy(va_list mims);
int s_mimbsy(va_list mims);
int (*selector(char str))(va_list mims);
int _printf(const char *format, ...);


#endif
