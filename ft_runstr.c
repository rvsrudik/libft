/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_runchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:15:39 by vrudenko          #+#    #+#             */
/*   Updated: 2016/12/01 17:44:21 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_runstr(char *str, char c)
{
	char	*tmp;

	if (!str)
		return (0);
	tmp = str;
	while (*tmp != c && *tmp != '\0')
		tmp++;
	return (tmp);
}
