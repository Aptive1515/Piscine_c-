/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:06:51 by aptive            #+#    #+#             */
/*   Updated: 2023/01/11 23:28:38 by aptive           ###   ########.fr       */
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
			std::cout << "A" << std::endl;
			dest = new A();
			break;
		case 2:
			std::cout << "B" << std::endl;
			dest = new B();
			break;
		case 3:
			std::cout << "C" << std::endl;
			dest = new C();
			break;
	}
	return dest;
}

// Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C".
void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

// Elle affiche le véritable type de l’objet p
void identify(Base& p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "C" << std::endl;
}


int	main ( void )
{
	Base	* obj = generate();
	Base	& obj_2 = *obj;

	identify(obj);
	identify(obj_2);

	delete obj;

}





