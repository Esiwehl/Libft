/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 16:18:25 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/13 12:23:45 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	while ((s1[idx] == s2[idx]) && (idx < n))
		idx++;
	return (s1[idx] - s2[idx]);
}

#include <string.h>
int main()
{
    char str1[] = "Dit is een goed ";
    char str2[] = "Dit is een goed voorbeeld";
    size_t len = sizeof(str1);
    // size_t len = 6;

    printf("O: %d\n", ft_strncmp(str1, str2, len));
    printf("M: %d\n", strncmp(str1, str2, len));
    return (0);
}
// CHECK WHAT HAPPENS IF |N| > STRLEN(S1|S2)