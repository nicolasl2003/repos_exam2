#include "ft_list_size.h"
#include <stdlib.h>
#include <stdio.h>
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

int	ft_list_size(t_list *begin_list)
{
    int count = 0;
    if (!begin_list)
        return (1);
    while (begin_list)
    {
        ft_putstr((char *) begin_list->data);
        count++;
        begin_list = begin_list->next;
    }

    return (count);
}


int main(void)
{
    t_list *n1;
    t_list *n2;
    t_list *n3;

    n1 = malloc(sizeof(t_list));
    n2 = malloc(sizeof(t_list));
    n3 = malloc(sizeof(t_list));

    n1->data = "pomme";
    n1->next = n2;

    n2->data = "aubergine";
    n2->next = n3;

    n3->data = "42";
    n3->next = NULL;

    printf("%d", ft_list_size(n1));
}