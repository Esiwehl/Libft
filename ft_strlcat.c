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

// #include <string.h>
// int	main(void)
// {
// 	char	str1[] = "Some cool string.";
// 	char	str2[] = " This is another cool string!";
// 	//int		sizeRight = 50;	
// 	int		sizeSmall = 12;
// 	int		ret;

// 	char	buff[sizeSmall];

// 	strcpy(buff, str1);
// 	ret = ft_strlcat(buff, str2, sizeSmall);
// 	//ret = strlcat(buff, str2, sizeRight);

// 	puts(buff);
// 	printf("Value of buff = %d\n", ret);
// 	//printf("Official Strlcat returns: %d\n", ret);
// 	return (0);
// }