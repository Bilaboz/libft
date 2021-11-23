/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarles <rcarles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:09:39 by rcarles           #+#    #+#             */
/*   Updated: 2021/11/16 17:09:39 by rcarles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
char	ft_toupper(int c);
char	ft_tolower(int c);
size_t	ft_strlen(const char *str);
void	ft_bzero(void *ptr, size_t size);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
void	*ft_memset(void *ptr, int value, size_t size);
void	*ft_memcpy(void *dest, void *src, size_t size);
void	*ft_memmove(void *dest, void *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif