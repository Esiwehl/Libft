/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 18:27:24 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/14 13:59:06 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	s_len;

	if (!dst || !src)
		return (0);
	s_len = ft_strlen(src);
	if (s_len + 1 < dsize) // THIS DOESNT MAKE ANY SENSE?
		ft_memcpy(dst, src, s_len + 1);
	else if (dsize != 0)
	{
		ft_memcpy(dst, src, dsize - 1);
		dst[dsize - 1] = '\0';
	}
	return (s_len);
}

//int	main(void)
//{
//	char	str1[] = "Test string 1";
//	char	str2[] = "String 2 test.";
//	char 	dest[] = "Kaas";
//	char 	dest2[] = "Ik wil ook kaas.";
//	unsigned int 	num = 5;
//	unsigned int 	num2 = 16;
//
//	printf("Length of str1 = %u\n", ft_strlcpy(dest, str1, num));
//	printf("Dest = %s\n", dest);
//	printf("Length of str2 = %u\n", ft_strlcpy(dest2, str2, num2));
//	printf("Dest2 = %s\n", dest2);
//	return (0);
//}