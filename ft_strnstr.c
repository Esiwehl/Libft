/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 18:02:30 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/11 12:02:14 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t n_len;
    size_t idx;

    idx = 0;
    n_len = ft_strlen(needle);
    if(needle[idx] == '\0')
        return ((char *)haystack);
    if (ft_strlen(haystack) < n_len)
		return (NULL);
    while (idx <= (len - n_len))
	{
		if (haystack[idx] == needle[0])
			if (ft_strncmp(haystack + idx, needle, n_len -1) == 0)
				return ((char *)(haystack + idx));
		idx++;
	}
    return (NULL);
}

// #include <string.h>
// int main()
// {
//     char bigOne[] = "thequickbrownfoxjumpedoverthelazydog";
//     char smallOne[] = "thel";

//     printf("O: %s\n", strnstr(bigOne, smallOne, sizeof(bigOne)));
//     printf("M: %s\n", ft_strnstr(bigOne, smallOne, sizeof(bigOne)));
// }