/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seronen <seronen@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:05:00 by seronen           #+#    #+#             */
/*   Updated: 2019/10/15 17:05:53 by seronen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
		{
			c++;
		}
		i++;
	}
	return (c);
}
