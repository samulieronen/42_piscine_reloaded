/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seronen <seronen@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 11:27:25 by seronen           #+#    #+#             */
/*   Updated: 2019/10/16 18:25:43 by seronen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int k;

	i = 1;
	k = 0;
	if (argc == 1)
		return (0);
	while (argv[i] != '\0')
	{
		k = 0;
		while (argv[i][k] != '\0')
		{
			ft_putchar(argv[i][k]);
			k++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
