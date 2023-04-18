#include <stdio.h>

int	ft_isalnum(int i)
{
	if (i >= 0 && i <= 127)
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
	b = -150;
	c = 91;
	d = 256;
	printf("%i\n", ft_isalnum(a));
	printf("%i\n", ft_isalnum(b));
	printf("%i\n", ft_isalnum(c));
	printf("%i\n", ft_isalnum(d));
	return (0);
}