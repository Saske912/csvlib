/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   csvlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sky <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 22:48:25 by sky               #+#    #+#             */
/*   Updated: 2021/08/20 15:57:41 by pfile            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CSVLIB_H
# define CSVLIB_H

# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <fcntl.h>
# include "get_next_line/get_next_line.h"

int				column_pos(int i, char *str, char simv);
char			*column_str_value(char *str, char simv);
int				strcmp_end(char *settings, char *extension);
char			*ft_strndup(char *str, int n);

#endif
