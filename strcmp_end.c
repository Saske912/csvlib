/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sky <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 23:57:16 by sky               #+#    #+#             */
/*   Updated: 2020/09/13 00:02:13 by sky              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "csvlib.h"

int		strcmp_end(char *settings, char *extension)
{
	if (strlen(settings) > strlen(extension))
	{
		while (*settings)
			settings++;
		settings--;
		while (*extension)
			extension++;
		extension--;
		while (isprint(*extension))
			if (*(settings--) != *(extension--))
				return (0);
		if (!isprint(*extension))
			return (1);
	}
	return (-1);
}
