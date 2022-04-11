/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:42:30 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/28 14:32:01 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalnum(int a)
{
	if ((a >= 'a' && a <= 'z')
		|| (a >= 'A' && a <= 'Z')
		|| (a >= '0' && a <= '9'))
		return (1);
	return (0);
}