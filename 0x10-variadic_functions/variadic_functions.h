#ifndef VARFUNC_H
#define VARFUNC_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);

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
