/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:05:55 by aptive            #+#    #+#             */
/*   Updated: 2023/01/12 01:11:12 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>


template <typename T>
void	affiche(T elem)
{
	std::cout << elem << std::endl;
}

template <typename T, typename U>
void	iter(T * tab, U tab_size, void (*f)(T))
{
	for (U i = 0; i < tab_size; i++)
		(*f)(tab[i]);
}



#endif /* ******************************************************** BASE_HPP */
