/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilinott <nilinott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 21:24:58 by nilinott          #+#    #+#             */
/*   Updated: 2026/03/11 21:28:35 by nilinott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return(s1[i] - s2[i]);
        i++;
    }
    return (0);
}

#include <stdio.h>

int main(void)
{
    char *s1 = "bonjour";
    char *s2 = "zbonjour";
    printf("%d", ft_strcmp(s1, s2));
}