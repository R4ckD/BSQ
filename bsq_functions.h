/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_functions.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:38:09 by caliaga-          #+#    #+#             */
/*   Updated: 2022/07/26 18:53:20 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_FUNCTIONS_H
#define BSQ_FUNCTIONS_H
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdio.h>
#include <unistd.h>
#include "bsq_struct.h"
int		ft_atoi_simply(char *str);
int		ft_putchar(char c);
int		ft_putchar_to(int fd, char c);
int		ft_error(int errn, char *str);
void	ft_putstr(char *str);
void	ft_putstr_to(int fd, char *str);
#endif
