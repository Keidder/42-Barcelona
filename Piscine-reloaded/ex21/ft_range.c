/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kruiz-cu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:47:38 by kruiz-cu          #+#    #+#             */
/*   Updated: 2024/09/17 21:58:19 by kruiz-cu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;
	int	length;

	length = max - min;
	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	array = malloc (sizeof(int) * (max - min));
	if (!array)
	{
		return (NULL);
	}
	while (i < length)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc > 2) {
        int start = atoi(argv[1]);
        int end = atoi(argv[2]);
        int* range = ft_range(start, end);

        int i = 0;
        int size = end - start;

        // Use a while loop to print the range
        while (i < size) {
            printf("%d ", range[i]);
            i++;
        }
        printf("\n");

        free(range);  // Don't forget to free the allocated memory
    } else {
        printf("error\n");
    }

    return 0;
}*/
/*
	int	nbrmin;
	int nbrmax;
	int	*rango;
	int	size;
	int	i;

	printf ("Ingrese valor minimo:");
	scanf ("%d", &nbrmin);
	printf ("Ingrese valor maximo:");
	scanf ("%d", &nbrmax);
	rango = ft_range(nbrmin, nbrmax);

	if (rango == NULL)
	{
		printf ("NULL");
	}
	if (nbrmin >= nbrmax)
	{
		printf ("Error");
	}
	i = 0;
	size = nbrmax - nbrmin;
	printf ("El rango entre %d y %d es: ", nbrmin, nbrmax);
	while (i < size)
	{	
		printf (" %d", rango[i++]);
	}
	free (rango);
	return (0);*/
