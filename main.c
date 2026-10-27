#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int		a;
	int		b;
	int		n;

	n = 42;

	
	a = printf("CHAR : [%c]\n", 'Z');
	b = ft_printf("CHAR : [%c]\n", 'Z');
	printf("Retour : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("CHAR NULL : [%c]\n", '\0');
	b = ft_printf("CHAR NULL : [%c]\n", '\0');
	printf("Retour : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("STRING : [%s] [%s]\n", "Bonjour 42", "");
	b = ft_printf("STRING : [%s] [%s]\n", "Bonjour 42", "");
	printf("Retour : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("POINTER : [%p]\n", (void *)&n);
	b = ft_printf("POINTER : [%p]\n", (void *)&n);
	printf("Retour : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("POINTER NULL : [%p]\n", (void *)NULL);
	b = ft_printf("POINTER NULL : [%p]\n", (void *)NULL);
	printf("Retour : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("DECIMAL MIN : [%d]\n", INT_MIN);
	b = ft_printf("DECIMAL MIN : [%d]\n", INT_MIN);
	printf("Retour : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("INTEGER MAX : [%i]\n", INT_MAX);
	b = ft_printf("INTEGER MAX : [%i]\n", INT_MAX);
	printf("Retour : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("UNSIGNED MAX : [%u]\n", UINT_MAX);
	b = ft_printf("UNSIGNED MAX : [%u]\n", UINT_MAX);
	printf("Retour : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("HEX LOWER : [%x]\n", UINT_MAX);
	b = ft_printf("HEX LOWER : [%x]\n", UINT_MAX);
	printf("Retour : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("HEX UPPER : [%X]\n", 48879);
	b = ft_printf("HEX UPPER : [%X]\n", 48879);
	printf("Retour : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("PERCENT : [%%]\n");
	b = ft_printf("PERCENT : [%%]\n");
	printf("Retour : printf=%d | ft_printf=%d\n\n", a, b);

	a = printf("MIX : %c | %s | %d | %u | %x | %%\n",
			'A', "42", -42, 42U, 255);
	b = ft_printf("MIX : %c | %s | %d | %u | %x | %%\n",
			'A', "42", -42, 42U, 255);
	printf("Retour : printf=%d | ft_printf=%d\n\n", a, b);

	return (0);
}