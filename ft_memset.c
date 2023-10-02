/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vockers <vockers@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 14:44:10 by vockers       #+#    #+#                 */
/*   Updated: 2023/10/02 17:29:22 by vockers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n)
	{
		*str++ = (unsigned char)c;
		n--;
	}
	return (s);
}

// #include <unistd.h>

// int	main()
// {
// 	char	arr[10];
// 	memset(arr, 325, 10);
// 	write(1, arr, 10);
// 	return 0;
// }