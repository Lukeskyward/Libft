#include <stdio.h>

int	ft_isalnum(int i)
{
	if ((i >= 48 && i <= 57) || (i >= 65 && i <= 90)
		|| (i >= 97 && i <= 122))
		return (1);
	else
		return (0);
}

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 38;
	b = 49;
	c = 91;
	d = 52;
	printf("%i\n", ft_isalnum(a));
	printf("%i\n", ft_isalnum(b));
	printf("%i\n", ft_isalnum(c));
	printf("%i\n", ft_isalnum(d));
	return (0);
}