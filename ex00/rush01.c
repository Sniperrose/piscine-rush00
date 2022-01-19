/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radaoudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:44:17 by radaoudi          #+#    #+#             */
/*   Updated: 2021/09/12 19:03:50 by radaoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putline(char cgauche, char center, char cdroit, int size)
{
	int	i;

	i = 1;
	while (i <= size)
	{
		if (i == 1)
			ft_putchar(cgauche);
		else if (i == size)
			ft_putchar(cdroit);
		else
			ft_putchar(center);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (i == 1)
	{
		ft_putline('/', '*', '\\', x);
		i++;
	}
	while (i > 1 && i < y)
	{
		ft_putline('*', ' ', '*', x);
		i++;
	}
	while (i == y)
	{
		ft_putline('\\', '*', '/', x);
		i++;
	}
}
