/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_print_numbers+.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:34:03 by dle               #+#    #+#             */
/*   Updated: 2021/10/18 19:46:52 by dle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)

{
	write(1, "0123456789", 10);
}

void	ft_print_numbers(void);

int	main(void)

{
	ft_print_numbers();
	return (0);
}