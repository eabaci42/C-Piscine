/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 01:48:07 by eabaci            #+#    #+#             */
/*   Updated: 2022/08/28 01:55:30 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 'z';
	while (z >= 'a')
	{
		write(1, &z, 1);
		z--;
	}
}
