#include <unistd.h>

#include <stdio.h>

int	main(int ac, char **av)
{
    int i = 0;
    int start_word = 0;
    int end_word = 0;
    if (ac != 2)
    {
        write(1, "\n", 1);
        return (1);
    }

    while (av[1][i])
    {
        if (av[1][i] != ' ')
            break;
        i++;
    }
    start_word = i;

    while (av[1][i])
    {
        if (av[1][i] == ' ')
            break;
        i++;
    }
    end_word = i;
    end_word--;
    while (av[1][i])
    {
        if (av[1][i] != ' ')
            break;
        i++;
    }

    while (av[1][i])
    {
        if (av[1][i] == ' ' && av[1][i + 1] == ' ')
            i++;
        else
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }

    write(1, " ", 1);
    while (start_word <= end_word)
    {
        write(1, &av[1][start_word], 1);
        start_word++;
    }
    write(1, "\n", 1);
}