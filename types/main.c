/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelderbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:19:29 by lelderbe          #+#    #+#             */
/*   Updated: 2020/11/19 17:20:44 by lelderbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	unsigned long	a;

	a = -1;
	printf("a: %lu\n", a);
	++a;
	printf("a: %lu\n", a);
}