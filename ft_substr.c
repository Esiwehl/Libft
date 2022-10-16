/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 18:26:31 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/16 19:03:48 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	idx;

	if (!s)
		{puts("here"); return (NULL);}
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	idx = 0;
	substr = (char *)malloc((len +1) * sizeof(char));
	if (!substr || start > len)
		return (NULL);
	while ((ft_strlen(s) >= start) && (idx < len))
	{
		puts("Yes?");
		substr[idx] = s[start + idx];
		idx++;
	}
	{puts("!!here"); return (NULL);}
}

int main()
{
    // char s1[] = "Dit is een moker lange string..";
	char *new = ft_substr("", 0, 0);
	printf("test len = %lu\n", ft_strlen(""));
    printf("See if this works:: %s\n", new);
    free(new);
}