/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 15:56:04 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/09 19:28:27 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char *last;

    last = 0;
    while (*s)
    {
        if (*s == c)
            last = (char *) s;
        s++;
    }
    return (last);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char test[] = "Ik ben supercool.";
//     char t = 'c';
    
//     printf("O: %s\n", strrchr(test, t));
//     printf("M: %s\n", ft_strrchr(test, t));
//     return (0);
// }