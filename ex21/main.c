/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seronen <seronen@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:00:21 by seronen           #+#    #+#             */
/*   Updated: 2019/10/16 18:17:05 by seronen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_range.c"

int main()
{
	int i;
	int min;
	int max;
	int *arr;

	min = -1;
	max = 2;
	arr = ft_range(min, max);
	printf("Array formed\n");
	i = 0;
/*	while (arr[i])
	{
		printf("%d\n", arr[i]);
		i++;
		}*/
		printf("%d\n", arr[0]);
		printf("%d\n", arr[1]);
		printf("%d\n", arr[2]);
		printf("%d\n", arr[3]);
	return (0);
}
