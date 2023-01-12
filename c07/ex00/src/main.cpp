/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:06:51 by aptive            #+#    #+#             */
/*   Updated: 2023/01/12 00:43:59 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/whatever.hpp"




int	main ( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	// return 0;
	// {
	// 	std::cout << "-------------------- Int ----------------" << std::endl;
	// 	int		a(42);
	// 	int		b(21);

	// 	std::cout << "max : " << max<int>(a, b) << std::endl;
	// 	std::cout << "min : " << min<int>(a, b) << std::endl;

	// 	std ::cout << "a : " << a << std::endl;
	// 	std ::cout << "b : " << b << std::endl;
	// 	std::cout << "swap a et b" << std::endl;
	// 	swap<int>(a, b);
	// 	std ::cout << "a : " << a << std::endl;
	// 	std ::cout << "b : " << b << std::endl;
	// }

	// {
	// 	std::cout << "-------------------- float ----------------" << std::endl;
	// 	float	a(42.5f);
	// 	float	b(21.5f);

	// 	std::cout << "max : " << max<float>(a, b) << std::endl;
	// 	std::cout << "min : " << min<float>(a, b) << std::endl;

	// 	std ::cout << "a : " << a << std::endl;
	// 	std ::cout << "b : " << b << std::endl;
	// 	std::cout << "swap a et b" << std::endl;
	// 	swap<float>(&a, &b);
	// 	std ::cout << "a : " << a << std::endl;
	// 	std ::cout << "b : " << b << std::endl;
	// }

	// {
	// 	std::cout << "-------------------- char ----------------" << std::endl;
	// 	char	a('a');
	// 	char	b('z');

	// 	std::cout << "max : " << max<char>(a, b) << std::endl;
	// 	std::cout << "min : " << min<char>(a, b) << std::endl;

	// 	std ::cout << "a : " << a << std::endl;
	// 	std ::cout << "b : " << b << std::endl;
	// 	std::cout << "swap a et b" << std::endl;
	// 	swap<char>(&a, &b);
	// 	std ::cout << "a : " << a << std::endl;
	// 	std ::cout << "b : " << b << std::endl;
	// }
	return 0;

}





