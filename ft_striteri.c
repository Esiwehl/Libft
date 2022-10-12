/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 18:01:50 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/12 19:17:59 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int idx; 

    idx = 0;
    while (s[idx])
    {
        f(idx, &s[idx]);
        idx++;
    }
}

// void foo(unsigned int x, char *s)
// {
//     int fd = 1;
//     ft_putnbr_fd(x, fd);
//     write(fd, "\t",1);
//     ft_putendl_fd(s, fd);
// }

// int main()
// {
//     char str[] = "Kaas";
//     void (*flop)(unsigned int, char*);
//     flop = &foo;
//     ft_striteri(str, flop);
// }