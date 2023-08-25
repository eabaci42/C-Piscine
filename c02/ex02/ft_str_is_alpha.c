/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:30:03 by eabaci            #+#    #+#             */
/*   Updated: 2022/09/07 17:36:01 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	cont_only_alph_char;
	int	i;

	cont_only_alph_char = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			cont_only_alph_char = 0;
		}
		i++;
	}
	return (cont_only_alph_char);
}
