/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:06:51 by aptive            #+#    #+#             */
/*   Updated: 2023/01/19 18:59:01 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

void print(int i)
{
	std::cout << i << std::endl;
}

int	main ( void )
{
	std::vector<int> tab_vector;


	for (int i = 0; i < 10; i++)
		tab_vector.push_back(i);
	try
	{
		std::vector<int>::iterator it_vector = easyfind(tab_vector, 10);
		std::cout << "iterator return vector: " << *it_vector << std::endl;
	}
	catch(const std::string& e)
	{
		std::cerr << e << std::endl;
	}

	std::list<int> tab_list;


	for (int i = 0; i < 10; i++)
		tab_list.push_back(i);
	try
	{
		std::list<int>::iterator it_list = easyfind(tab_list, 2);
		std::cout << "iterator return list : " << *it_list << std::endl;
	}
	catch(const std::string& e)
	{
		std::cerr << e << std::endl;
	}


	return 0;
}
