#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>
int main (void)
{
	int n;
	n = ft_printf(" %d text\nand more", 0);
	printf("\nprinted %d chars\n\n",n);
	n = printf(" %d text\nand more", 0);
	printf("\nprinted %d chars\n\n",n);
}