/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsurovt <elsurovt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 03:20:09 by elsurovt          #+#    #+#             */
/*   Updated: 2024/05/26 03:30:33 by elsurovt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t a);
int ft_isalnum(int a);
int ft_isalpha(int a);
int ft_isascii(int a);
int ft_isdigit(int a);
int ft_isprint(int a);
void *ft_memchr(const void *str, int a, size_t b);
int ft_memcmp(const void *str1, const void *str2, size_t a);
void *ft_memcpy(void *dst, const void *src, size_t a);
void *ft_memmove(void *dst, const void *src, size_t a);
void *ft_memset(void *str, int a, size_t b);
char *ft_strchr(const *str, int a);
size_t strlcat(char *dst, const char *src, size_t dstsize);
size_t ft_strlcpy(char *dst, const char *src, size_t siz);
int ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t a);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strrchr(const char *str, int a);
int ft_tolower(int a);
int ft_toupper(int a);

#endif