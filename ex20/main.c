/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seronen <seronen@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:05:59 by seronen           #+#    #+#             */
/*   Updated: 2019/10/15 14:22:20 by seronen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strdup.c"

int main()
{
	char *str;

	str = "hivehelsinki";
	printf("%s", ft_strdup(str));
	return (0);
}
