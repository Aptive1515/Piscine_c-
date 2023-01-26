/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:06:51 by aptive            #+#    #+#             */
/*   Updated: 2023/01/20 18:08:45 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int	main ( void )
{
	std::cout << GREEN <<"---------- Test Sujet ---------------------------------------------" << std::endl;

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	std::cout << RED <<"---------- Shortestspan / LongestSpan -----------------------------" << std::endl;
	Span tab(10);

	tab.addNumber(180);
	tab.addNumber(2);
	tab.addNumber(80);
	tab.addNumber(0);

	std::cout << "Shortestspan : " << tab.shortestSpan() << std::endl;
	std::cout << "LongestSpan : " << tab.longestSpan() << std::endl;


	std::cout << YELLOW << "---------- TEST add Number / range iterator -----------------------" << std::endl;

	Span tab_2(10);
	std::vector<int> tab_to_push;

	for (int i = 0; i < 11; i++)
		tab_to_push.push_back(i);

	tab_2.addNumber(tab_to_push.begin(), tab_to_push.end());
	std::cout << tab_2;

	return 0;
}

