/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 17:32:07 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/11 12:01:34 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *cs1;
	unsigned char *cs2;
    size_t idx;

    idx = 0;
    cs1 = (unsigned char *) s1; 
    cs2 = (unsigned char *) s2;
    while ((cs1[idx] == cs2[idx]) && (idx < n-1))
        idx++;
    return (cs1[idx] - cs2[idx]);
}

// #include <string.h>
// int main()
// {
//     char test1[] = "CHEESE";
//     char test2[] = "CHEESe";
    
//     printf("O: %d\n", memcmp(test1, test2, sizeof(test1)));
//     printf("M: %d\n", ft_memcmp(test1, test2, sizeof(test1)));
//     return (0);
// }

/*              ALT WHILE
    printf("idx = %lu\tn = %lu\n", idx, n);
	printf("cs1 = %c\tcs2 = %c\n", cs1[idx], cs2[idx]);
    while(idx < n)
    {
        if (cs1[idx] != cs2[idx])
            return (cs1[idx] - cs2[idx]);
        idx++;
    }
    return (0);
*/