/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:06:51 by aptive            #+#    #+#             */
/*   Updated: 2023/01/17 16:59:09 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"



// Elle crée aléatoirement une instance de A, B ou C et la retourne en tant que pointeur sur
// Base. Utilisez ce que vous souhaitez pour l’implémentation du choix aléatoire.
Base * generate(void)
{
	Base * dest;

	srand (static_cast<unsigned int >(time(0)));
	switch (rand() % 3 + 1)
	{
		case 1:
			std::cout << "Initialiszation :	A" << std::endl;
			dest = new A();
			break;
		case 2:
			std::cout << "Initialiszation :	B" << std::endl;
			dest = new B();
			break;
		case 3:
			std::cout << "Initialiszation :	C" << std::endl;
			dest = new C();
			break;
	}
	return dest;
}

// Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C".
void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "By pointeur :		A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "By pointeur :		B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "By pointeur :		C" << std::endl;
}

// Elle affiche le véritable type de l’objet p
void identify(Base& p)
{
	try
	{
		static_cast<void>(dynamic_cast<A&>(p));
		std::cout << "By reference :		A" << std::endl;
	}
	catch(const std::exception& e)
	{}

	try
	{
		static_cast<void>(dynamic_cast<B&>(p));
		std::cout << "By reference :		B" << std::endl;
	}
	catch(const std::exception& e)
	{}

	try
	{
		static_cast<void>(dynamic_cast<C&>(p));
		std::cout << "By reference :		C" << std::endl;
	}
	catch(const std::exception& e)
	{}
}


int	main ( void )
{
	Base	* obj = generate();
	Base	& obj_2 = *obj;

	identify(obj);
	identify(obj_2);

	delete obj;

}





