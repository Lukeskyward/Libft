#include <stdio.h>

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
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

	a = 26;
	b = 48;
	c = 127;
	d = 120;
	printf("%i\n", ft_isprint(a));
	printf("%i\n", ft_isprint(b));
	printf("%i\n", ft_isprint(c));
	printf("%i\n", ft_isprint(d));
	return (0);
}