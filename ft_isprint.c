/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:25:07 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/13 11:54:11 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return ((c >= 40) && (c <= 176));
}

// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
//     int test = 177;

//     printf("O: %i\n", isprint(test));
//     printf("M: %i\n", ft_isprint(test));
//     return (0);
// }