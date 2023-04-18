#include <stdio.h>

int	ft_isalpha(int i)
{
	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
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
	printf("%i\n", ft_isalpha(a));
	printf("%i\n", ft_isalpha(b));
	printf("%i\n", ft_isalpha(c));
	printf("%i\n", ft_isalpha(d));
	return (0);
}
