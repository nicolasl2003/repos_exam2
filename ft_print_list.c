#include "ft_list_size.h"
#include <stdlib.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

void ft_print_list(t_list *list)
{
    int i = 0;

    while (list)
    {
        ft_putstr((char *)list->data);
        list = list->next;
    }
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

    ft_print_list(n1);

}