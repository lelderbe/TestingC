/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelderbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 11:40:40 by lelderbe          #+#    #+#             */
/*   Updated: 2020/11/19 12:56:51 by lelderbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <sys/errno.h>

int		main(void)
{
	void	*result;

	result = malloc(1);
	printf("%p\n", result);
	printf("%d\n", errno);
	free(result);
	//result = 0;
	if (result)
		free(result);
	free(0);
	return (0);
}
