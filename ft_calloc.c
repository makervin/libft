/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vockers <vockers@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 14:45:29 by vockers       #+#    #+#                 */
/*   Updated: 2023/10/02 15:55:45 by vockers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new;
	size_t	mem_size;

	mem_size = nmemb * size;
	new = malloc(mem_size);
	if (!new)
		return (NULL);
	ft_bzero(new, mem_size);
	return (new);
}
