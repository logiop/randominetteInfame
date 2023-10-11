/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvernare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:47:51 by gvernare          #+#    #+#             */
/*   Updated: 2023/10/08 18:47:59 by gvernare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define N_DIGITS 10

void	write_char(int n)
{
	char	c;

	c = '0' + n;
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;
	int	right;
	int	ch;

	i = 0;
	while (i < N_DIGITS - n + 1)
	{
		right = i + n - 1;
		while (right < N_DIGITS)
		{
			j = 0;
			while (j < n - 1)
			{
				write_char(i + j);
				++j;
			}
			write_char(right);
			if (N_DIGITS - n != i || right != 9)
				write(1, ", ", 2);
			++right;
		}
		++i;
	}
}
