/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 16:15:13 by iiliuk            #+#    #+#             */
/*   Updated: 2016/09/21 16:15:32 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (s2 != NULL)
	{
		while (s1[i] != '\0')
		{
			s2[i] = s1[i];
			i++;
		}
		s2[i] = '\0';
		return (s2);
	}
	return (NULL);
}
