#ifndef VARFUNC_H
#define VARFUNC_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type - Struct data type
 *
 * @op: data type argument
 * @f: The function associated
 */

typedef struct type
{
	char *op;
	void (*f)(va_list, char *);
} type_t;

#endif
