/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:14:42 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/04 16:56:15 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	int test = '9';
// 	printf("O: %i\n", isalpha(test));
// 	printf("M: %i\n", ft_isalpha(test));
// 	return (0);
// }