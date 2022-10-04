#include <ctype.h>
// include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("O: %i\n", isdigit('A'));
//     printf("M: %i\n", ft_isdigit('A'));
//     return 0;
// }