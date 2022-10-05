/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 17:50:43 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/05 19:10:19 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *t_dst;
	const unsigned char *t_src;
	size_t idx;

	idx = 0;
	t_dst = (unsigned char *) dst;
	t_src = (const unsigned char *) src;
	if (!src || !dst)
		return 0;
	while (idx < n)
	{
		t_dst[idx] = t_src[idx];
		idx++;
	}
	return (dst);
}


// #include <string.h>
// int	main(void)
// {
// 	char s1[] = "";
// 	char s2[] = "9876";

// 	puts("before");
// 	for(size_t i = 0; i < (sizeof(s1)); i++)
// 	{
// 		printf("%c", s2[i]);
// 	}
// 	// memcpy(s2, s1, (sizeof(s1)));
// 	ft_memcpy(s2, s1, (sizeof(s1)));
// 	puts("\nafter");
// 	for(size_t i = 0; i < (sizeof(s1)); i++)
// 	{
// 		printf("%c", s2[i]);
// 	}
// }