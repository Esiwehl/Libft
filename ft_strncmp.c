/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 16:18:25 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/13 12:23:45 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	if (n == 0)
		return (0);
	while ((s1[idx] == s2[idx]) && (idx < n - 1))
		idx++;
	return ((unsigned char) s1[idx] - (unsigned char) s2[idx]);

}

// #include <string.h>
// int main()
// {
//     printf("O: %d\n", strncmp("test\200", "test\0", 6));
//     printf("M: %d\n", ft_strncmp("test\200", "test\0", 6));
//     return (0);
// }