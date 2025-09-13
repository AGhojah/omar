#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void print_to(char *s, int length)
{
	int i = 0;
	while (i < length)
	{
		printf("%c", s[i]);
		i++;
	}
}

void striteri_func(unsigned int a, char *b)
{
	b[0] = b[0] + 1;
}

void ft_striteri_test(void)
{
	printf("************ ft_striteri_test ************ \n");

	char *hello = ft_strdup("hello world");
	ft_putstr_fd("before  : ", 1);
	ft_putendl_fd(hello, 1);
	ft_striteri(hello, striteri_func);
	ft_putstr_fd("after +1: ", 1);
	ft_putendl_fd(hello, 1);
	printf("\n");
	free(hello);
}

char strmapi_func(unsigned int a, char b)
{
	if (b >= 'a' && b <= 'z')
		return (b - ('a' - 'A'));
	else
		return b;
}

void ft_strmapi_test(void)
{
	printf("************ ft_strmapi_test ************ \n");

	char *hello = ft_strdup("hello world");
	ft_putstr_fd("original  : ", 1);
	ft_putendl_fd(hello, 1);
	char *tester = ft_strmapi(hello, strmapi_func);
	ft_putstr_fd("mapped : ", 1);
	ft_putendl_fd(tester, 1);
	printf("\n");
	free(hello);
	free(tester);
}

void print_memcmp_line(char *a, char *b, int n)
{
	printf("\"%s\" vs \"%s\" int = %i result =%i\n", a, b, n, ft_memcmp(a, b, n));
}

void print_memcmp(void)
{
	char *a = "hello world";
	char *b = "hello worlb";
	char *c = "hello world";
	char *d = "hello";
	char *e = "hello x";
	char *f = "";

	print_memcmp_line(a, b, ft_strlen(a));
	print_memcmp_line(a, c, ft_strlen(a));
	print_memcmp_line(a, d, ft_strlen(a));
	print_memcmp_line(a, e, ft_strlen(a));
	print_memcmp_line(a, f, 3);
	print_memcmp_line(a, b, 5);
	printf("\n");

}

int main(void)
{
	char small_c = 'a';
	char small_c2 = 'z';
	char cap_c = 'A';
	char cap_c2 = 'Z';
	char num_c = '0';
	char symb = '@';
	char not_c = (char)127;

	printf("is alpha? \n");
	printf("\'%c\'? %s\n", small_c, ft_isalpha(small_c)?"Yes":"No");
	printf("\'%c\'? %s\n", small_c2, ft_isalpha(small_c2)?"Yes":"No");
	printf("\'%c\'? %s\n", cap_c, ft_isalpha(cap_c)?"Yes":"No");
	printf("\'%c\'? %s\n", cap_c2, ft_isalpha(cap_c2)?"Yes":"No");
	printf("\'%c\'? %s\n", num_c, ft_isalpha(num_c)?"Yes":"No");
	printf("\'%c\'? %s\n", symb, ft_isalpha(symb)?"Yes":"No");
	printf("\'%c\'? %s\n\n", not_c, ft_isalpha(not_c)?"Yes":"No");

	printf("is digit? \n");
	printf("\'%c\'? %s\n", small_c, ft_isdigit(small_c)?"Yes":"No");
	printf("\'%c\'? %s\n", small_c2, ft_isdigit(small_c2)?"Yes":"No");
	printf("\'%c\'? %s\n", cap_c, ft_isdigit(cap_c)?"Yes":"No");
	printf("\'%c\'? %s\n", cap_c2, ft_isdigit(cap_c2)?"Yes":"No");
	printf("\'%c\'? %s\n", num_c, ft_isdigit(num_c)?"Yes":"No");
	printf("\'%c\'? %s\n", symb, ft_isdigit(symb)?"Yes":"No");
	printf("\'%c\'? %s\n\n", not_c, ft_isdigit(not_c)?"Yes":"No");

	printf("is alnum? \n");
	printf("\'%c\'? %s\n", small_c, ft_isalnum(small_c)?"Yes":"No");
	printf("\'%c\'? %s\n", small_c2, ft_isalnum(small_c2)?"Yes":"No");
	printf("\'%c\'? %s\n", cap_c, ft_isalnum(cap_c)?"Yes":"No");
	printf("\'%c\'? %s\n", cap_c2, ft_isalnum(cap_c2)?"Yes":"No");
	printf("\'%c\'? %s\n", num_c, ft_isalnum(num_c)?"Yes":"No");
	printf("\'%c\'? %s\n", symb, ft_isalnum(symb)?"Yes":"No");
	printf("\'%c\'? %s\n\n", not_c, ft_isalnum(not_c)?"Yes":"No");

	printf("is print? \n");
	printf("\'%c\'? %s\n", small_c, ft_isprint(small_c)?"Yes":"No");
	printf("\'%c\'? %s\n", small_c2, ft_isprint(small_c2)?"Yes":"No");
	printf("\'%c\'? %s\n", cap_c, ft_isprint(cap_c)?"Yes":"No");
	printf("\'%c\'? %s\n", cap_c2, ft_isprint(cap_c2)?"Yes":"No");
	printf("\'%c\'? %s\n", num_c, ft_isprint(num_c)?"Yes":"No");
	printf("\'%c\'? %s\n", symb, ft_isprint(symb)?"Yes":"No");
	printf("\'%c\'? %s\n\n", not_c, ft_isprint(not_c)?"Yes":"No");

	printf("is ascii? \n");
	printf("\'%c\'? %s\n", small_c, ft_isascii(small_c)?"Yes":"No");
	printf("\'%c\'? %s\n", small_c2, ft_isascii(small_c2)?"Yes":"No");
	printf("\'%c\'? %s\n", cap_c, ft_isascii(cap_c)?"Yes":"No");
	printf("\'%c\'? %s\n", cap_c2, ft_isascii(cap_c2)?"Yes":"No");
	printf("\'%c\'? %s\n", num_c, ft_isascii(num_c)?"Yes":"No");
	printf("\'%c\'? %s\n", symb, ft_isascii(symb)?"Yes":"No");
	printf("\'%c\'? %s\n\n", not_c, ft_isascii(not_c)?"Yes":"No");

	char *atoi_char = "   -008243";
	char *atoi_char2 = "   -008243 42";
	char *atoi_char3 = "   +243dq33 ";
	char *atoi_char4 = "   -d008243";
	char *atoi_char5 = "-00dd8243   ";
	char *atoi_char6 = "+   -008243";
	char *atoi_char7 = " -9998243";
	char *atoi_char8 = " -93884827008243d";

	printf("************ ft_atoi ************ \n");
	printf("\"%s\" as int = %i\n", atoi_char, ft_atoi(atoi_char));
	printf("\"%s\" as int = %i\n", atoi_char2, ft_atoi(atoi_char2));
	printf("\"%s\" as int = %i\n", atoi_char3, ft_atoi(atoi_char3));
	printf("\"%s\" as int = %i\n", atoi_char4, ft_atoi(atoi_char4));
	printf("\"%s\" as int = %i\n", atoi_char5, ft_atoi(atoi_char5));
	printf("\"%s\" as int = %i\n", atoi_char6, ft_atoi(atoi_char6));
	printf("\"%s\" as int = %i\n", atoi_char7, ft_atoi(atoi_char7));
	printf("\"%s\" as int = %i\n\n", atoi_char8, ft_atoi(atoi_char8));

	char *bz = ft_strdup("Hello World");
	printf("************ ft_bzero ************ \n");
	printf("before using bzero(bz, 4) = %s\n", bz);
	ft_bzero(bz, 4);
	printf("after using bzero(bz, 4) = %s\n", bz);
	printf("after using bzero(bz, 4) (print ignore \\0) = ");
	print_to(bz, 11);
	printf("\n\n");
	free(bz);

	printf("************ ft_calloc ************ \n");
	char *c_normal = (char *)ft_calloc(5, sizeof(char));
	char *c_s_zero = (char *)ft_calloc(5, 0);
	char *c_mb_zero = (char *)ft_calloc(0, sizeof(char));
	char *c_over = (char *)ft_calloc(2000000000, 2000);
	printf("ft_calloc(5, sizeof(char) = %s\n", c_normal);
	if (c_s_zero == NULL)
		printf("ft_calloc(5, 0) = NULL\n");
	else
		printf("ft_calloc(5, 0) = Non-NULL\n");
	if (c_mb_zero == NULL)
		printf("ft_calloc(0, 1) = NULL\n");
	else
		printf("ft_calloc(0, 1) = Non-NULL\n");
	if (c_over == NULL)
		printf("ft_calloc(2000000000, 2000) = NULL\n");
	else
		printf("ft_calloc(2000000000, 2000) = %s\n", c_over);
	print_to(c_normal, 5);
	printf("\n\n");
	free(c_normal);
	free(c_s_zero);
	free(c_mb_zero);
	free(c_over);

	printf("************ ft_itoa ************ \n");
	char *n_normal = ft_itoa(123456789);
	char *n_pmax = ft_itoa(2147483647);
	char *n_nmax = ft_itoa(-2147483648);
	char *n_zero = ft_itoa(0);
	printf("\"%i\" as string = %s\n", 123456789, n_normal);
	printf("\"%i\" as string = %s\n", 2147483647, n_pmax);
	printf("\"%i\" as string = %s\n", (int)-2147483648, n_nmax);
	printf("\"%i\" as string = %s\n\n", 0, n_zero);
	free(n_normal);
	free(n_pmax);
	free(n_nmax);
	free(n_zero);

	printf("************ ft_memchr ************ \n");
	char *memchar = "hello worlds?";
	printf("searching \"%s\" for \'w\'\n", memchar);
	printf("result = %s\n", (char *)ft_memchr(memchar, 'w', 13));
	char *memchar2 = "hello worlds?";
	printf("searching \"%s\" for \'h\' with 0 size\n", memchar2);
	printf("result = %s\n", (char *)ft_memchr(memchar2, 'h', 0));
	char *memchar3 = "hello worlds?";
	printf("searching \"%s\" for \'x\'\n", memchar3);
	printf("result = %s\n", (char *)ft_memchr(memchar3, 'x', 13));
	char *memchar4 = "hello worlds?";
	printf("searching \"%s\" for \'w\' and size 4\n", memchar4);
	printf("result = %s\n", (char *)ft_memchr(memchar4, 'w', 4));
	char memchar5[] = {'a', '\0', 'b', 'c'};
	printf("searching {\'a\', \'\\0\', \'b\', \'c\'} for \'b\' and size 4\n");
	printf("result = %s\n\n", (char *)ft_memchr(memchar5, 'b', 4));

	printf("************ ft_memcmp ************ \n");
	print_memcmp();

	ft_striteri_test();

	ft_strmapi_test();
}
