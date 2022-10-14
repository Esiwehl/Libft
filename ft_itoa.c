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

int	get_len(int *nb)
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
	// int		tmp_n;

	len = get_len(&n);
	// printf("len = %i\n", len);
	numa = (char *)malloc(sizeof(char) * (len + 1));
	if (!numa)
		return (NULL);
	numa[len + 1] = '\0';
	if (n < 0)
	{
		n = -n;
		numa[0] = '-';
	}
	// else
	// 	tmp_n = n;
	if (n == 0)
		numa[0] = '0';
	while (n && len-- > 0)
	{
		numa[len] = (n % 10) + '0';
		n = n / 10;
		// printf("pos 0:: %i\n", numa[0]);
	}
	// if (n < 0)
	// 	numa[0] = '-';
	return (numa);
}

// int main()
// {
// 	int x = -10;
// 	char *strx;
// 	strx = ft_itoa(x);
// 	printf("strx = %s\n", strx);
// 	free (strx);
// }
// check if n == 0
// check if n = MININT