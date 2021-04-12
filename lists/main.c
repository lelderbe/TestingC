#include <stdio.h>
#include <stdlib.h>

typedef struct		s_node {
	int				value;
	struct s_node	*next;
}					t_node;

t_node	*lstnew(int value)
{
	t_node	*result;

	result = malloc(sizeof(*result) * 1);
	if (!result)
		return (0);
	result->value = value;
	result->next = 0;
	return (result);
}

void	lstadd_front(t_node **lst, int value)
{
	t_node	*node;

	if (!lst)
		return ;
	node = lstnew(value);
	node->next = *lst;
	*lst = node;
}

void	lst_remove_even(t_node **lst)
{
	t_node	*ptr;
	t_node	**pp;

	if (!lst)
		return ;

	pp = lst;

	while (*pp)
	{
		if ((*pp)->value % 2)
		{
			ptr = *pp;
			*pp = (*pp)->next;
			free(ptr);
		}
		else
			pp = &((*pp)->next);
	}
/*
	while (*pp)
	{
		if ((**pp).value % 2)
		{
			ptr = *pp;
			*pp = (**pp).next;
			free(ptr);
		}
		else
			pp = &((**pp).next);
	}
*/
/*
	ptr = *lst;
	
	while (ptr)
	{
		if (ptr->value % 2)
		{
			tmp = ptr;
			ptr = ptr->next;
			free(tmp);
		}
		else
		{
			ptr = ptr->next;
		}
	}
*/
}

int		main(void)
{
	t_node	*list;
	t_node	*ptr;
	int		i;

	list = 0;
	i = 0;
	while (i < 5)
	{
		lstadd_front(&list, i);
		i++;
	}
	lst_remove_even(&list);
	ptr = list;
	while (ptr)
	{
		printf("%d ", ptr->value);
		ptr = ptr->next;
	}
	printf("\n");



	return (0);
}
