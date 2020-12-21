/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelderbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 14:04:11 by lelderbe          #+#    #+#             */
/*   Updated: 2020/12/21 14:07:53 by lelderbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	func1(void)
{
	int i;

	i = 1;
	printf("   auto i: %d\n", i);

	{
		static int i;

		i++;
		printf(" static i: %d\n", i);
	}
	
	printf("  after i: %d\n", i);
}

int		main(void)
{
	func1();
	func1();
	func1();
}
