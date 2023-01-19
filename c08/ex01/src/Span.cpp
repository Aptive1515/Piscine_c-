/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:45:39 by aptive            #+#    #+#             */
/*   Updated: 2023/01/19 23:22:15 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

// CONSTRUCTOR --------------------------------------------------------------

Span::Span( void )
{

}

Span::Span( unsigned int len )
{
	this->_len = len;
}

Span::Span(Span const & src)
{
	*this = src;
}

Span &	Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		for (long unsigned int i = 0; i < rhs._tab_int.size(); i++)
			this->_tab_int[i] = rhs._tab_int[i];
	}
	return *this;
}

// DESTRUCTOR ---------------------------------------------------------------
Span::~Span( void )
{}

// ACCESSOR -----------------------------------------------------------------
std::vector<int> Span::getTab( void ) const
{
	return this->_tab_int;
}


// METHODS ------------------------------------------------------------------

void	Span::addNumber(int nb)
{
	static unsigned int nb_push = 0;

	try
	{
		if (nb_push == _len)
			throw std::string("Error : Max push");
		this->_tab_int.push_back(nb);
		nb_push++;
	}
	catch(const std::string& e)
	{
		std::cerr << e << std::endl;
	}

}

int		Span::shortestSpan( void )
{
	int	min_diff(-1);
	int	new_diff;
	std::vector<int> tmp_vector = _tab_int;

	try
	{
		if (this->_tab_int.size() <= 1)
			throw std::string("Error : Impossible longestSpan");

		std::vector<int>::iterator it_nb = tmp_vector.begin();

		std::sort(tmp_vector.begin(), tmp_vector.end());
		for (std::vector<int>::iterator it = tmp_vector.begin(); it != tmp_vector.end(); it++)
		{
			if (it != tmp_vector.begin())
			{
				if (it < it_nb)
					new_diff = *it_nb - *it;
				else
					new_diff = *it - *it_nb;

				if (new_diff < min_diff || min_diff < 0)
					min_diff = new_diff;
			}
			*it_nb = *it;
		}
		return min_diff;
	}
	catch(const std::string& e)
	{
		std::cerr << e << std::endl;
		return -1;
	}
}

int		Span::longestSpan( void )
{
	std::vector<int> tmp_vector = _tab_int;

	try
	{
		if (this->_tab_int.size() <= 1)
			throw std::string("Error : Impossible longestSpan");

		std::sort(tmp_vector.begin(), tmp_vector.end());

		// std::cout << "--------------\n";
		// for (std::vector<int>::iterator it = tmp_vector.begin(); it != tmp_vector.end(); it++)
		// 	std::cout << "tab_sort : "  << *it << std::endl;
		int max = *std::max_element(tmp_vector.begin(), tmp_vector.end());
		int min = *std::min_element(tmp_vector.begin(), tmp_vector.end());
		// std::cout << "Max | Min : " << max << " | " << min << std::endl;
		return max - min;
	}
	catch(const std::string& e)
	{
		std::cerr << e << std::endl;
		return -1;
	}

}


std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	std::vector<int> tab = i.getTab();

	for (std::vector<int>::iterator it = tab.begin(); it != tab.end(); it++)
		o << *it << std::endl;
	return o;
}
