#include "ft_list_size.h"
#include <stdlib.h>


int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    if (!s1 || !s2)
        return (1);
    while (s1[i] || s2[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);

    
}
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*remove;
	t_list	*current;

	current = *begin_list;
	while (current && current->next)
	{
		if ((*cmp)(current->next->data, data_ref) == 0)
		{
			remove = current->next;
			current->next = current->next->next;
			free(remove);
		}
		current = current->next;
	}
	current = *begin_list;
	if (current && (*cmp)(current->data, data_ref) == 0)
	{
		*begin_list = current->next;
		free(current);
	}
}
#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    t_list *n1;
    t_list *n2;
    t_list *n3;
    t_list *n4;

    n1 = malloc(sizeof(t_list));
    n2 = malloc(sizeof(t_list));
    n3 = malloc(sizeof(t_list));
    n4 = malloc(sizeof(t_list));

    n1->data = "pomme";
    n1->next = n2;

    n2->data = "aubergine";
    n2->next = n3;

    n3->data = "42";
    n3->next = n4;

    n4->data = "et";
    n4->next = NULL;

    t_list *tmp = n1;

    while (tmp)
    {
        ft_putstr((char *)tmp->data);
        ft_putstr("\n");
        tmp = tmp->next;
    }
    write(1, "\n",  1);
    ft_list_remove_if(&n1, "aubergine", ft_strcmp);

    while (n1)
    {
        ft_putstr((char *)n1->data);
        ft_putstr("\n");
        n1 = n1->next;
    }
}