#include <stdio.h>
#include <stdlib.h>
size_t  ft_strlen(const char *str); 
char    *ft_strdup(const char *s)
{
    char *nstr;
    int idx;
    int len;

    idx = 0;
    len = (int)ft_strlen(s);
    nstr = (char *)malloc((len + 1) * sizeof(char));
    while (s[idx] != '\0')
    {
        nstr[idx] = s[idx];
        idx++;
    }
    nstr[idx] = '\0';
    return (nstr);
}

// int main()
// {
//     char s1[] = "Dit werkt gwn maat";
//     char *ns1;

//     ns1 = ft_strdup(s1);
//     printf("after ns1 = %s\t", ns1);
//     printf("address = %p\n", ns1);
//     printf("address s1 = %p\n", s1);
//     free(ns1);
//     return 0;
// }