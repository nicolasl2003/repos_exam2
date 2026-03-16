/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilinott <nilinott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 20:30:50 by nilinott          #+#    #+#             */
/*   Updated: 2026/03/16 18:17:08 by nilinott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int c)
{

    if (c == -2147483648)
    {
        write(1, "-2147483648", 11);
    }

    if (c < 0)
    {
        c = c * -1;
        ft_putchar('-');
    }

    if (c >= 0 && c <= 9)
    {
        ft_putchar(c + '0');
    }
    else
    {
        ft_putnbr(c / 10);
        ft_putnbr(c % 10);
    }
}

int main(void)
{
    ft_putnbr(-420000);
}