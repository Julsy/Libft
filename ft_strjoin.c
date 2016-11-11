/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiliuk <iiliuk@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 12:42:17 by iiliuk            #+#    #+#             */
/*   Updated: 2016/09/27 12:42:17 by iiliuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	char *tmp;

	if (s1 && s2)
	{
		str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (str != NULL)
		{
			tmp = str;
			while (*s1 != '\0')
				*tmp++ = *s1++;
			while (*s2 != '\0')
				*tmp++ = *s2++;
			*tmp = '\0';
			return (str);
		}
	}
	return (NULL);
}
