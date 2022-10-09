/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 18:26:37 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/09 19:29:23 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <stdlib.h>
void    *ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ptr = ft_bzero(ptr, (nmemb *size));
	return (ptr);
}

// #include <string.h>
// int main()
// {
//     size_t count = 1;
//     size_t len = 12;
//     char *str1;
//     char *str2;

//     str1 = malloc(len);
//     str2 = malloc(len);
	
//     printf("addresses1 = %p \taddresses2 = %p\n", str1, str2);
//     strcpy(str1, "JustDoIt");
//     strcpy(str2, str1);
//     for (size_t i = 0; i < len; i++)
//     {
//          printf("str1 = %i, %c\tstr2 = %i, %c\n", str1[i], str1[i], str2[i], str2[i]);
//     }
//     str1 = ft_calloc(count, sizeof(str1));
//     puts("SOME NICE BREAK");
//      for (size_t i = 0; i < len; i++)
//     {
//         printf("str1 = %i, %c\tstr2 = %i, %c\n", str1[i], str1[i], str2[i], str2[i]);
//     }
//     free(str1);
//     free(str2);
// }

//                  *Man Instructions unclear*
// If the multiplication of nmemb and size would result   
//        in integer overflow, then calloc() returns an error.  By  contrast,  an   
//        integer  overflow  would  not be detected in the following call to mal‐   
//        loc(), with the result that an incorrectly sized block of memory  would   
//        be allocated:

//            malloc(nmemb * size);