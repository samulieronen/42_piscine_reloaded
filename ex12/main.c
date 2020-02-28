/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seronen <seronen@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:42:25 by seronen           #+#    #+#             */
/*   Updated: 2019/10/16 14:50:38 by seronen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iterative_factorial.c"
#include <stdio.h>

int main()
{
	int nb;

	nb = 12;
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}
