/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedmurie@student.42madrid.com <pedmurie    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:56:07 by pedmurie@st       #+#    #+#             */
/*   Updated: 2022/03/23 16:45:07 by pedmurie@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void	*ft_calloc(size_t count, size_t size)
{
	int		a;
	char	*ptr;

	a = count * size;
	if (a == 0)
		return (0);
	ptr = malloc(a);
	memset(ptr, '\0', a);
	return (ptr);
}
/*
int	main()
{
	size_t	count;
	size_t	size;
	int		a;
	int		*ptr;

	count = 4;
	size = 4;
	a = 0;
	ptr = ft_calloc(count, size);
//	printf("%d\n", (int)calloc(count, size));
	ft_calloc(count, size);
	while (a <= 8)
	{
		printf("%d", ptr[a]);
		a++;
	}
	return (0);
}
*/