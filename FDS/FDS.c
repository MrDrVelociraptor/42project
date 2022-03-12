/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FDS.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:37:34 by nspeedy           #+#    #+#             */
/*   Updated: 2022/02/24 16:04:55 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <stdbool.h>

char	*company_name(int p)
{
	char	*fds[3];
	char	*name;
	char	*tmp;

	fds[0] = "Fancy";
	fds[1] = "Development";
	fds[2] = "Services";
	if (p == 1)
	{
		name = (char *)malloc(sizeof(char *));
		name = ft_strcat(ft_substr((fds[0]), 0, 1), ft_substr((fds[1]), 0, 1));
		name = ft_strcat(name, ft_substr((fds[2]), 0, 1));
	}
	else if (p == 0)
	{
		tmp = ft_strjoin(ft_substr((fds[0]), 0, ft_strlen(fds[0])), " ");
		name = ft_strjoin(tmp, ft_substr(fds[1], 0, ft_strlen(fds[1])));
		tmp = ft_strjoin(name, " ");
		name = ft_strjoin(tmp, ft_substr(fds[2], 0, ft_strlen(fds[2])));
	}
	return (name);
}

//This function takes a user input with 'scanf' and the 
//appends it to the welcome message using 'ft_strjoin'
//It then prints out the input using 'printf'

int	main(void)
{
	int		i;
	char	*name;
	char	*welcome;

	i = 0;
	welcome = "Welcome to ";
	printf("Enter your first name\n");
	scanf("%s", name);
	printf("The user input was - %s\n", name);
	while (name[i])
	{
		if (ft_isalpha(name[i]) == 1)
			i++;
		else if (ft_isalpha(name[i]) == 0)
		{
			printf("Invalid name, only alphbetical characters accepted\n");
			printf("Enter your name\n");
			scanf("%s", name);
		}
	}
	printf("%s %s\n", ft_strjoin(welcome, company_name(0)), name);
	return (0);
}
