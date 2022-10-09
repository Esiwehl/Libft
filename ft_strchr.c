/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 15:56:04 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/09 17:11:46 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
            return ((char *) s);
        s++;
    }
    return (0);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char test[] = "Ik ben supercool.";
//     char t = 'o';
    
//     printf("O: %s\n", strchr(test, t));
//     printf("M: %s\n", ft_strchr(test, t));
//     return (0);
// }