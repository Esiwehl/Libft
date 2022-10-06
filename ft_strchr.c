/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 15:56:04 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/06 16:08:10 by ewehl         ########   odam.nl         */
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

#include <string.h>
#include <stdio.h>
int main()
{
    char test[] = "Ik ben supercool.";
    char t = 'd';
    
    printf("O: %s\n", strchr(test, t));
    printf("M: %s\n", ft_strchr(test, t));
    return (0);
}