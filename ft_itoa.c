/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:47:46 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/14 19:27:46 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int *nb)
{
	int	len;
	int	n;

	len = 1;
	n = *nb;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*numa;
	int		len;

	len = get_len(&n);
	numa = (char *)malloc(sizeof(char) * (len + 1));
	if (!numa)
		return (NULL);
	numa[len] = '\0';
	if (n == -2147483648)
	{
		ft_strlcpy(numa, "-2147483648", 12);
		return (numa);
	}
	if (n < 0)
	{
		n = -n;
		numa[0] = '-';
	}
	if (n == 0)
		numa[0] = '0';
	while (n && len-- > 0)
	{
		numa[len] = (n % 10) + '0';
		if (n > 9)
			n /= 10;
	}
	return (numa);
}

// static int	amount(int n)
// {
// 	int	i;

// 	i = 1;
// 	if (n < 0)
// 		i++;
// 	while (n >= 10 || n <= -10)
// 	{
// 		n = n / 10;
// 		i++;
// 	}
// 	return (i);
// }

// static int	edgecasecheck(int n, char *str)
// {
// 	if (n == -2147483648)
// 	{
// 		ft_strlcpy(str, "-2147483648", 12);
// 		return (1);
// 	}
// 	else if (n == 0)
// 	{
// 		str[0] = '0';
// 		str[1] = '\0';
// 		return (1);
// 	}
// 	return (0);
// }

// char	*ft_itoa(int n)
// {
// 	char	*ret;
// 	int		i;
// 	// int		nb;

// 	i = get_len(&n);
// 	// nb = n;
// 	if (n < 0)
// 		n = -n;
// 	ret = (char *)malloc(i + 1);
// 	if (ret == NULL)
// 		return (NULL);
// 	if (edgecasecheck(n, ret) == 1)
// 		return (ret);
// 	ret[i] = '\0';
// 	// i--;
// 	while (i-- > 0)
// 	{
// 		ret[i] = n % 10 + '0';
// 		if (n > 9)
// 			n /= 10;
// 		// i--;
// 	}
// 	if (n < 0)
// 		ret[0] = '-';
// 	return (ret);
// }

int main()
{
	int x = -2147483647;
	char *strx;
	strx = ft_itoa(x);
	printf("strx = %s\n", strx);
	free (strx);
}
// check if n == 0
// check if n = MININT