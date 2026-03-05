/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 21:44:08 by maaugust          #+#    #+#             */
/*   Updated: 2026/03/05 23:21:05 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

/**
 * @fn int main(void)
 * @brief Entry point for testing the rush function.
 * @details Calls the rush function with predetermined dimensions. During a real
 * defense, evaluators will modify this file to test various edge cases like
 * zero, negative numbers, and massive dimensions.
 * @return 0 upon successful execution.
 */
int	main(void)
{
	rush(5, 3);
	return (0);
}
