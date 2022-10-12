#include "libft.h"

int	get_len(int *nb)
{
	int len;
	int n;

	len = 1;
	n = *nb;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 9)
	{
		n/10;
		len++;
	}
	return (len);
}

char	putnb(int num)
{

}

char	*ft_itoa(int n)
{
	char *numa;
	int len;

	idx = 0;
	len = get_len(&n);
	numa = (char *)malloc(sizeof(char) * len + 1);
	if (!numa)
		return (NULL);
	numa[len + 1] = '\0';
	while (len > 0)
	{
		numa[len] = putnb(n);
	}

	return (numa);
}

// check if n == 0
// check if n = MININT