#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	signal;
	int	result;

	i = 0;
	signal = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			signal = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * signal);
}

int	main(void)
{
	char	str1[] = "   	 -2147483648";
	char	str2[] = "2147483647";
	printf("%d\n", ft_atoi(str1));
	printf("%d\n", atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d", atoi(str2));
	return (0);
}