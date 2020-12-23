/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelderbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 14:10:39 by lelderbe          #+#    #+#             */
/*   Updated: 2020/12/23 14:19:18 by lelderbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_flags {
	unsigned int	is_keyword : 1;
	unsigned int	is_extern : 1;
	unsigned int	is_static : 1;
} t_flags;

int		main(void)
{
	t_flags	flags = {1, 2, 0};

	//flags.is_keyword = 1;
	//flags.is_extern = 0;
	//flags.is_static = 1;

	printf("is_keyword: %d\n", flags.is_keyword);
	printf("is_extern: %d\n", flags.is_extern);
	printf("is_static: %d\n", flags.is_static);
}
