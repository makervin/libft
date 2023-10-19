/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_io.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: vockers <vockers@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 18:58:23 by vockers       #+#    #+#                 */
/*   Updated: 2023/10/19 18:58:23 by vockers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_IO_H
# define LIBFT_IO_H

void	ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_putptr_fd(void *ptr, int fd);
int		ft_putunbr_fd(unsigned int n, int fd);
int		ft_putunbr_base_fd(unsigned int n, char *base, int fd);

#endif