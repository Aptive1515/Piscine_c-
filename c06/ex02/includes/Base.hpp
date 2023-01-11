/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:05:55 by aptive            #+#    #+#             */
/*   Updated: 2023/01/11 19:52:14 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

#include <stdlib.h>		/* srand, rand */
#include <time.h>		/* time */


class Base
{

public:
	virtual ~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

Base::~Base()
{}


#endif /* ******************************************************** BASE_HPP */
