/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:51:45 by aptive            #+#    #+#             */
/*   Updated: 2022/12/29 19:55:13 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.class.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main()
{
// const Animal* k = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

j->makeSound();
i->makeSound();

delete j;//should not create a leak
delete i;
}
