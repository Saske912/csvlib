/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   csvlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sky <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 22:48:25 by sky               #+#    #+#             */
/*   Updated: 2020/10/13 22:56:02 by sky              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CSVLIB_H
# define CSVLIB_H

# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <fcntl.h>
# include "bin/get_next_line.h"

int				column_pos(int i, char *str, char simv);
char			*column_str_value(char *str, char simv);
int				strcmp_end(char *settings, char *extension);
char			*ft_strndup(char *str, int n);
char			**arr_file(char *arg);

#endif
