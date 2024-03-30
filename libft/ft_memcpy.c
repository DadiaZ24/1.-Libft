/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:56:32 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/01/17 16:56:32 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, int n)
{
	int		i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (!d && !s)
		return (0);
	i = -1;
	while (++i < n)
		d[i] = s[i];
	return (d);
}
