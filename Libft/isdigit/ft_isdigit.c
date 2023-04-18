#include <stdio.h>

int	ft_isdigit(int i)
{
	if (i >= 48 && i <= 57)
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

	a = 97;
	b = 49;
	c = 90;
	d = 52;
	printf("%i\n", ft_isdigit(a));
	printf("%i\n", ft_isdigit(b));
	printf("%i\n", ft_isdigit(c));
	printf("%i\n", ft_isdigit(d));
	return (0);
}
