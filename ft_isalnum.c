/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:05:34 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/05 14:32:39 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// int ft_isalpha(int c);
// int ft_isdigit(int c);
int ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <ctype.h>
// #include <stdio.h>
// int main(void)
// {
//     int test = '*';

//     printf("O: %i\n", isalnum(test));
//     printf("M: %i\n", ft_isalnum(test));
//     return (0);
// }