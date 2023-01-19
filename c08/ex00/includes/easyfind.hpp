/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:05:55 by aptive            #+#    #+#             */
/*   Updated: 2023/01/19 18:58:30 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <algorithm>



template <typename T>
typename T::iterator	easyfind(T & arg, int nb)
{

	typename T::iterator it = std::find(arg.begin(), arg.end(), nb);

	if (it != arg.end())
		return it;
	throw std::string("Error not find in the container");

}


#endif /* ******************************************************** EASYFIND_HPP */
