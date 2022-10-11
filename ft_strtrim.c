/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 11:41:51 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/11 15:36:59 by ewehl         ########   odam.nl         */
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
	size_t	s_len;
	size_t	len;
	size_t	idx;
	size_t	x;
	char	*new;

	x = 1;
	idx = 0;
	len = ft_strlen(s1);
	s_len = ft_strlen(set);
	while (is_set((s1 + idx), set, s_len))
		idx += s_len;
	while (is_set((s1 + (len - (x * s_len))), set, s_len))
		x++;
	len -= (idx + ((x - 1) * s_len));
	printf("len = %lu\n", sizeof(new));
	new = (char *)malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	ft_memcpy(new, s1 + idx, len);
	new[len + (size_t)1] = '\0';
	printf("len = %lu\n", sizeof(new));
	// printf("trim len = %s\n", trimmed);
	// printf("trim len = %lu\n", ft_strlen(ft_memcpy(trimmed, (s1 + idx), (len - (idx + ((x - 1) * s_len))))));
	// return (ft_memcpy(trimmed, (s1 + idx), (len - (idx + ((x - 1) * s_len)))));
	return (new);
}

int	main()
{
	char *trimmed;
	char tobe[] = "strstrstrUntriimmedstrstrstr";
	char set[] = "str";

	trimmed = ft_strtrim(tobe, set);
	printf("Mstr = %s\n", trimmed);
	free(trimmed);
}

// What do i do if set is not in the str? Nothing..?
// Should I deal with \n, \t, " "? Or simply mostly printable characters?
// What if only the set is in my function?
// Is it case-sensitive?