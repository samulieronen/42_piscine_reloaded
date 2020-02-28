/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seronen <seronen@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:55:26 by seronen           #+#    #+#             */
/*   Updated: 2019/10/16 15:41:48 by seronen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_recursive_factorial.c"
#include <stdio.h>

int main()
{
	int nb;

	nb = 0;
	printf("%d", ft_recursive_factorial(nb));
	return (0);
}
