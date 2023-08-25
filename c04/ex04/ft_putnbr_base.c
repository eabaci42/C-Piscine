/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:39:27 by eabaci            #+#    #+#             */
/*   Updated: 2022/09/14 20:03:10 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

int	ft_check_error(char *src)
{
	int	base_len;
	int	i;
	int	si;

	base_len = ft_strlen(src);
	i = 0;
	if (src[0] == '\0' || base_len == 1)
	{
		return (1);
	}
	while (src[i] != '\0')
	{
		if (src[i] <= 32 || src[i] == 127 || src[i] == 43 || src[i] == 45)
			return (1);
		si = i + 1;
		while (si < base_len)
		{
			if (src[i] == src[si])
				return (1);
			si++;
		}	
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	int		error;
	long	nb;

	error = ft_check_error(base);
	base_len = ft_strlen(base);
	nb = nbr;
	if (error == 0)
	{
		if (nb < 0)
		{
			ft_putchar(45);
			nb *= -1;
		}
		if (nb < base_len)
			ft_putchar(base[nb]);
		if (nb >= base_len)
		{
			ft_putnbr_base(nb / base_len, base);
			ft_putnbr_base(nb % base_len, base);
		}
	}
}
