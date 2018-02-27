/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 11:20:54 by cdupuis           #+#    #+#             */
/*   Updated: 2018/02/11 14:49:34 by cdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int		l;
	int		i;
	char	tmp;

	l = ft_strlen(str);
	i = 0;
	while (i < l / 2)
	{
		tmp = str[i];
		str[i] = str[l - 1 - i];
		str[l - 1 - i] = tmp;
		i++;
	}
	return (str);
}
