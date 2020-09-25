/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sky <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 21:28:32 by sky               #+#    #+#             */
/*   Updated: 2020/09/14 21:31:47 by sky              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "csvlib.h"

char	*ft_strndup(char *str, int n)
{
	char	*line;
	int		i;

	i = 0;
	if (!(line = calloc(n + 1, sizeof(char))))
		return (NULL);
	while (i < n)
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}
