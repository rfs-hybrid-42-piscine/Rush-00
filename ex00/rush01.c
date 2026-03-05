/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 21:43:24 by maaugust          #+#    #+#             */
/*   Updated: 2026/03/05 23:22:07 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/**
 * @fn void rush(int x, int y)
 * @brief Draws a rectangle of specified dimensions using ASCII characters.
 * @details For rush01, the top-left and bottom-right corners are '/', and the
 * top-right and bottom-left are '\'. Edges are represented by '*'. Protects
 * against corner overwriting on 1D shapes.
 * @param x The horizontal width of the rectangle.
 * @param y The vertical height of the rectangle.
 */
void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	i = 0;
	while (++i <= y)
	{
		j = 0;
		while (++j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x && x > 1 && y > 1))
				ft_putchar('/');
			else if ((i == 1 && j == x) || (i == y && j == 1))
				ft_putchar('\\');
			else if (i == 1 || i == y || j == 1 || j == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
