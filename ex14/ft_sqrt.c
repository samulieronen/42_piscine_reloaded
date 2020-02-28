/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seronen <seronen@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:23:16 by seronen           #+#    #+#             */
/*   Updated: 2019/10/16 15:51:50 by seronen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int number;

	number = 1;
	if (nb == 0)
		return (0);
	while (nb)
	{
		if (number * number == nb)
			return (number);
		else if ((number * number) > nb)
			return (0);
		number++;
	}
	return (number);
}
