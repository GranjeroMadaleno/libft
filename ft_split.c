/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:35:31 by andefern          #+#    #+#             */
/*   Updated: 2023/06/06 15:54:06 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @brief función para contar palabras
 * 
 * @param s string recibido
 * @param c character a buscar
 * @return int la posicion del caracter
 */
static int	count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (s[i] == '\0')
		return (0);
	if (c == '\0')
		j--;
	while (s[i])
	{
		if (s[i] != c && s[i + 1] == c)
			j++;
		i++;
	}
	if (s[i - 1] == c)
		j--;
	return (j);
}
/**
 * @brief función para localizar el caracter que coincide
 * 
 * @param s string recibido
 * @param c caracter a buscar
 * @param a la posición en el string
 * @return int 
 */

static int	locate(char const *s, char c, int a)
{
	int	i;

	i = a;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}
/**
 * @brief funcion para separar
 * 
 * @param s string recibido
 * @param c caracter a buscar
 * @param a posición en el string
 * @return int posición final
 */

static int	jump(char const *s, char c, int a)
{
	int	i;

	i = a;
	while (s[i])
	{
		if (s[i] != c)
			return (i);
		i++;
	}
	return (i);
}
/**
 * @brief liberar memoria
 * 
 * @param j posición de dst
 * @param dst palabras con memoria reservda
 * @return char** puntero de puntero de las palabras
 */

static char	**del(int j, char **dst)
{
	while (--j >= 0)
		free(dst[j]);
	free(dst);
	return (NULL);
}
/**
 * @brief función principal para dividir el string
 * 
 * @param s string recibido
 * @param c caracter a buscar
 * @return char** puntero de puntero de las palabras separadas
 */

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		j;
	int		l;
	int		a;
	int		i;

	if (!s)
		return (NULL);
	j = 0;
	l = count(s, c);
	dst = malloc((l + 1) * sizeof(char *));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (l-- > 0 && !(c == '\0' && s[0] == '\0'))
	{
		a = jump(s, c, i);
		i = locate(s, c, a);
		dst[j] = ft_substr(s, a, (i - a));
		if (dst[j++] == NULL)
			return (del(j, dst));
	}
	dst[count(s, c)] = NULL;
	return (dst);
}
