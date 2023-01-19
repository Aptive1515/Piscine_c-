/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:06:51 by aptive            #+#    #+#             */
/*   Updated: 2023/01/19 23:22:58 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int	main ( void )
{
	Span tab(10);

	// for (int i = 0; i < 11; i++)

	tab.addNumber(180);
	tab.addNumber(40);
	tab.addNumber(80);
	tab.addNumber(0);


	// std::cout << tab;
	std::cout << "Shortestspan : " << tab.shortestSpan() << std::endl;

	std::cout << "LongestSpan : " << tab.longestSpan() << std::endl;

	return 0;
}


// int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }
