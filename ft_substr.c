/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 18:26:31 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/23 19:36:01 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	idx;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	idx = 0;
	while (idx < len && s[start])
	{
		substr[idx] = s[start];
		idx++;
		start++;
	}
	substr[idx] = '\0';
	return (substr);
}

// int main()
// {
//     // char s1[] = "Dit is een moker lange string..";
// 	char *new = ft_substr("hola", 0, -1);
// 	printf("test len = %lu\n", ft_strlen(""));
//     printf("See if this works:: %s\n", new);
//     free(new);
// }
