/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvernare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 02:02:54 by gvernare          #+#    #+#             */
/*   Updated: 2023/10/10 10:13:57 by gvernare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int j;
	//argc = 5;
	
	i = 1;
	j = 0;
	printf("Valore argc: %d", argc);
	while (i< argc)
	{
		while(argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		j = 0;
		i++;
		write(1, "\n", 1);
	}
}
