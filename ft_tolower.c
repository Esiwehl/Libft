/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:15:02 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/04 16:37:05 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');
	return (c);
}

#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int test = '9';
	printf("O: %c\n", tolower(test));
	printf("M: %c\n", ft_tolower(test));
	return (0);
}