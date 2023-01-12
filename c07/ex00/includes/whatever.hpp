/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:05:55 by aptive            #+#    #+#             */
/*   Updated: 2023/01/12 00:46:39 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>


template <typename T>
T	max(T const & x, T const & y)
{
	return ((x > y) ? x : y);
}

template <typename T>
T	min(T const & x, T const & y)
{
	return ((x < y) ? x : y);
}

template <typename T>
void	swap(T & x, T & y)
{
	T	tmp;
	tmp = x;
	x = y;
	y = tmp;
}



#endif /* ******************************************************** BASE_HPP */
