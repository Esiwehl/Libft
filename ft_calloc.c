// #include "libft.h"
#include <stdio.h>
#include <stdlib.h>
void    *ft_bzero(void *s, size_t n);
void    *calloc(size_t nmemb, size_t size)
{
    void *ptr;

    ptr = malloc(nmemb * size);
    if (!ptr)
        return (NULL);
    ptr = ft_bzero(ptr, (nmemb *size));
    return (ptr);
}

/*
int main()
{

}
*/
//                  *Man Instructions unclear*
// If the multiplication of nmemb and size would result   
//        in integer overflow, then calloc() returns an error.  By  contrast,  an   
//        integer  overflow  would  not be detected in the following call to mal‐   
//        loc(), with the result that an incorrectly sized block of memory  would   
//        be allocated:

//            malloc(nmemb * size);