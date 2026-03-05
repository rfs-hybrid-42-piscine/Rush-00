/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 21:43:34 by maaugust          #+#    #+#             */
/*   Updated: 2026/03/05 23:22:44 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/**
 * @fn void rush(int x, int y)
 * @brief Draws a rectangle of specified dimensions using ASCII characters.
 * @details For rush03, both left corners are 'A', and both right corners are
 * 'C'. All surrounding edges are represented by 'B'. Inner space is hollow.
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
			if ((i == 1 || i == y) && j == 1)
				ft_putchar('A');
			else if ((i == 1 || i == y) && j == x)
				ft_putchar('C');
			else if (i == 1 || i == y || j == 1 || j == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
