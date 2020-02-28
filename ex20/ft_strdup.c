/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seronen <seronen@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:56:50 by seronen           #+#    #+#             */
/*   Updated: 2019/10/15 14:33:01 by seronen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*newstring;

	i = 0;
	newstring = malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (src[i] != '\0')
	{
		newstring[i] = src[i];
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
