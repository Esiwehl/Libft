/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 18:02:30 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/06 18:05:44 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
size_t ft_strlen(char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t n_len;
    size_t idx;

    idx = 0;
    n_len = ft_strlen((char *)needle);
    if(needle[idx] == '\0')
        return ((char *)haystack);
    if (ft_strlen((char *)haystack) < n_len)
		return (0);
    while (idx <= (len - n_len))
	{
		if (haystack[idx] == needle[0])
			if (ft_strncmp(haystack + idx, needle, n_len) == 0)
				return ((char *)(haystack + idx));
		idx++;
	}
    return (0);
}

#include <string.h>
int main()
{
    char bigOne[] = "thequickbrownfoxjumpedoverthelazydog";
    char smallOne[] = "the";

    printf("O: %d", strnstr(bigOne, smallOne, sizeof(bigOne)));
    printf("M: %s", ft_strnstr(bigOne, smallOne, sizeof(bigOne)));
}