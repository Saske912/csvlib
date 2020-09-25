/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column_str_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sky <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 22:48:01 by sky               #+#    #+#             */
/*   Updated: 2020/09/13 23:56:27 by sky              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "csvlib.h"

char	*column_str_value(char *str, char simv)
{
	int		i;
	int		k;
	char	*line;

	i = 0;
	if (str && simv)
	{
		while (str[i] != simv)
			i++;
		if (str[i] == simv)
		{
			k = 0;
			i++;
			while (str[i + k] != simv)
				k++;
			if (str[i + k] == simv)
			{
				if (!(line = calloc(k + 1, sizeof(char))))
					return (NULL);
				line[k] = '\0';
				while (k--)
					line[k] = str[i + k];
				return (line);
			}
		}
	}
	return (str);
}
