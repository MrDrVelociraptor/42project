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
#include "libft/libft.h"

//This function stores errors in a .txt file if 
//the main program encounters an error

void	error(void)
{
	FILE	*error;

	error = fopen("./error.txt", "a");
	if (error != NULL)
		fprintf(error, "User entered incorrect input\n");
	close(1);
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
	welcome = "Welcome to FDS - ";
	printf("Enter your name\n");
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
			printf("%s\n", ft_strjoin(welcome, name));
			error();
		}
	}
	printf("%s\n", ft_strjoin(welcome, name));
	return (0);
}
