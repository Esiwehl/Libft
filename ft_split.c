/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ewehl <ewehl@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 17:31:38 by ewehl         #+#    #+#                 */
/*   Updated: 2022/10/12 19:30:29 by ewehl         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	get_limc(char const *s, char c)
{
	size_t idx;
	size_t limc;

	idx = 0;
	limc = 0;
	while (s[idx])
	{
		if (s[idx] == c)
			limc++;
		idx++;
	}
	return (limc);
}

static char	*ft_strcdup(const char *s, size_t pos)
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

char    **ft_split(char const *s, char c)
{
	char **arr;
	size_t idx;
	size_t len;
	size_t pos;

	idx = 0;
	len = get_limc(s, c);
	arr = (char **)malloc(len * sizeof(char *) + 1);
	 while (pos < len)
	 {
		arr[pos] = ft_strcdup();
	 }
	return (arr);
}

int main()
{
	char str[] = "Deze_Zin_Moet_Worden_Gesplit";
	char c = '_';
	char **holder;

	holder = ft_split(str, c);
	free(holder);
}
// get no. of words
// get allocate mem for substr
// put in split arr.