//#include "libft.h"
#include <stdio.h>
size_t  ft_strlen(char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	idx;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	if (size == 0 || d_len >= size)
		return (s_len + size);
	idx = 0;
	while (src[idx] && (idx + d_len + 1 < size))
	{
		dst[d_len + idx] = src[idx];
		idx++;
	}
	dst[d_len + idx] = '\0';
	return (d_len + s_len);
}

#include <string.h>
int main()
{
    char bigOne[11] = "Pinda";
    char smallOne[] = "kaas";

    printf("old: %s\n", bigOne);
    printf("O: %u\n", strlcat(bigOne, smallOne, sizeof(bigOne)));
    printf("new: %s\n", bigOne);
    //printf("M: %s", ft_strnstr(bigOne, smallOne, sizeof(bigOne)));
}