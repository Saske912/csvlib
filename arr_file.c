/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sky <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:30:01 by sky               #+#    #+#             */
/*   Updated: 2020/10/13 22:38:55 by sky              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "csvlib.h"

char	**arr_file(char *arg)
{
	int		fd;
	char	*string;
	char	**map;
	int		i;
	int		k;

	i = 0;
	if ((fd = open(arg, O_RDONLY | O_CREAT | O_TRUNC, S_IRWXU)) == -1)
		return (NULL);
	while (get_next_line(fd, &string) == 1)
	{
		i++;
		free(string);
	}
	i++;
	free(string);
	close(fd);
	if (!(map = (char **)calloc(i + 1, sizeof(char *))))
		return (NULL);
	k = 0;
	if ((fd = open(arg, O_RDONLY)) == -1)
		return (NULL);
	while (k < i)
		if (get_next_line(fd, &map[k++]) == -1)
			return (NULL);
	close(fd);
	return (map);
}
