/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_memory.h                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: vockers <vockers@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 19:04:59 by vockers       #+#    #+#                 */
/*   Updated: 2023/10/19 19:04:59 by vockers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MEMORY_H
# define LIBFT_MEMORY_H

int				ft_abs(int x);
unsigned int	ft_uabs(int x);
int				ft_atoi(const char *str);
char			*ft_itoa(int n);
char			*ft_itoa_base(int n, char *base);
char			*ft_utoa(unsigned int n);
char			*ft_utoa_base(unsigned int n, char *base);

#endif