/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 21:43:04 by maaugust          #+#    #+#             */
/*   Updated: 2026/03/05 23:21:50 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/**
 * @fn void rush(int x, int y)
 * @brief Draws a rectangle of specified dimensions using ASCII characters.
 * @details For rush00, corners are represented by 'o', horizontal edges by '-',
 * and vertical edges by '|'. Inner space is hollow. Fails silently if
 * dimensions are zero or negative.
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
			if ((i == 1 || i == y) && (j == 1 || j == x))
				ft_putchar('o');
			else if (i == 1 || i == y)
				ft_putchar('-');
			else if (j == 1 || j == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
