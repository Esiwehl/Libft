// #include "libft.h"
#include <stdio.h>
size_t  ft_strlen(char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	s_len;

	if (!dst || !src)
		return (0);
	s_len = ft_strlen(src);
	if (s_len + 1 < dsize)
		ft_memcpy(dst, src, s_len + 1);
	else if (dsize != 0)
	{
		ft_memcpy(dst, src, dsize - 1);
		dst[dsize - 1] = 0;
	}
	return (s_len);
}

int main()
{

}