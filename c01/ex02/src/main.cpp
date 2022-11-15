/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:57:23 by aptive            #+#    #+#             */
/*   Updated: 2022/11/03 17:17:38 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string.h>
# include <cstdlib>

int	main ( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "str		: " << &str << std::endl;
	std::cout << "stringPTR	: " << stringPTR << std::endl;
	std::cout << "stringREF	: " << &stringREF << std::endl;


	std::cout << "str		: " << str << std::endl;
	std::cout << "stringPTR	: " << *stringPTR << std::endl;
	std::cout << "stringREF	: " << stringREF << std::endl;

	return (0);
}
