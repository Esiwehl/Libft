/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 18:26:31 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/13 17:51:49 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	idx;
	size_t	pos;

	idx = 0;
	pos = 0;
	substr = (char *)malloc((len +1) * sizeof(char));
	if (!substr || ((size_t)start + len) >= ft_strlen((s)))
		return (NULL);
	while (s[idx])
	{
		if (idx == (size_t) start)
		{
			while (pos <= len)
			{
				substr[pos++] = s[idx++];
				if (pos == len)
				{
					substr[pos] = '\0';
					return (substr);
				}
			}
		}
		idx++;
	}
	return (NULL);
}

// int main()
// {
//     char s1[] = "Dit is een moker lange string..";
//     char *new;

//     new = ft_substr(s1, 30, (size_t) 1);
//     size_t len = ft_strlen(new);
//     printf("See if this works:: %s\n", new);
//     printf("len = %lu", len);
//     free(new);
// }