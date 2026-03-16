/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilinott <nilinott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 20:40:33 by nilinott          #+#    #+#             */
/*   Updated: 2026/03/11 20:46:35 by nilinott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    
    if (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
    {
        i++;
    }

    if (str[i] == '-')
    {
        sign = sign * -1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return (result * sign);
}
#include <stdio.h>

int main(void)
{
    printf("%d", ft_atoi("-42"));
}