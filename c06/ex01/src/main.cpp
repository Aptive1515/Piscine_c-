/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:06:51 by aptive            #+#    #+#             */
/*   Updated: 2023/01/11 19:00:59 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serial.hpp"




// Elle prend un pointeur et convertit celui-ci vers le type d’entier non-signé uintptr_t.
uintptr_t	serial(Data * ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
	// return target;
}

// Elle prend un entier non-signé en paramètre et le convertit en pointeur sur Data.
Data* deserialize(uintptr_t raw)
{

	return reinterpret_cast<Data *>(raw);
}


int	main ( void )
{
	Data		data;
	Data		*ptr_data;
	uintptr_t	objetif_1;

	data.name = "hello\n";
	data.nb = 1;



	objetif_1 = serial(&data);
	ptr_data = deserialize(objetif_1);

	std::cout << "-------------------Serial-------------------------------------" << std::endl;
	std::cout << "Adress serial : " <<objetif_1 << std::endl;

	std::cout << "-------------------Data before serial-------------------------" << std::endl;
	std::cout << "Adress : " << &ptr_data << std::endl;
	std::cout << "Name : " << data.name;
	std::cout << "Nb : " << data.nb << std::endl;

	std::cout << "-------------------Data after serial--------------------------" << std::endl;
	std::cout << "Adress : " << ptr_data << std::endl;
	std::cout << "Name : " << ptr_data->name;
	std::cout << "Nb : " << ptr_data->nb << std::endl;

}


