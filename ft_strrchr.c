/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 15:56:04 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/13 12:26:12 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == c)
			return((char *) &s[len]);
		len--;
	}
	return (NULL);
}

// #include <string.h>
// int main()
// {
//     char test[] = "Ik ben supercool.";
//     char t = '\0';

//     printf("O: %s\n", strrchr(test, t));
//     printf("M: %s\n", ft_strrchr(test, t));
//     return (0);
// }