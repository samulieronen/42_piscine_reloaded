/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seronen <seronen@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:52:49 by seronen           #+#    #+#             */
/*   Updated: 2019/10/16 15:52:25 by seronen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sqrt.c"
#include <stdio.h>

int main()
{
	int nb;

	nb = -0;
	printf("%d", ft_sqrt(nb));
	return(0);
}
