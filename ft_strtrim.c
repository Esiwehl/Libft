/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 11:41:51 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/13 12:27:06 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char const *s1, char const *set, size_t len)
{
	if (ft_memcmp(s1, set, len) == 0)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	s_len;
	size_t	len;
	size_t	idx;
	size_t	x;

	x = 1;
	idx = 0;
	len = ft_strlen(s1);
	s_len = ft_strlen(set);
	if (!s1 || !set)
		return (NULL);
	while (is_set((s1 + idx), set, s_len))
		idx += s_len;
	while (is_set((s1 + (len - (x * s_len))), set, s_len))
		x++;
	len -= (idx + ((x - 1) * s_len));
	new = (char *)malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1 + idx, len + 1);
	printf("len = %lu\n", (ft_strlen(new)));
	return (new);
}

// int	main()
// {
// 	char *trimmed;
// 	char tobe[] = "strstrUntrimmedstrbmstrstrstr";
// 	char set[] = "str";
//
// 	trimmed = ft_strtrim(tobe, set);
// 	printf("Mstr = %s\n", trimmed);
// 	free(trimmed);
// }

// What do i do if set is not in the str? Nothing..?
// Should I deal with \n, \t, " "? 
//		Or simply mostly printable characters?
// What if only the set is in my function? 
//		Should return NULL, is this handeled by Moulinette?
// Is it case-sensitive?