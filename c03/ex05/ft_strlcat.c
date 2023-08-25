/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabaci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:53:39 by eabaci            #+#    #+#             */
/*   Updated: 2022/09/10 17:54:10 by eabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dstlen;
	unsigned int	srclen;

	i = 0;
	srclen = ft_strlen(src);
	j = ft_strlen(dest);
	dstlen = j;
	if (size == 0 || size <= dstlen)
		return (srclen + size);
	while ((src[i] != '\0') && (i < (size - dstlen - 1)))
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dstlen + srclen);
}
