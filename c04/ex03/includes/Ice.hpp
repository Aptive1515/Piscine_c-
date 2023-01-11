/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:04:52 by aptive            #+#    #+#             */
/*   Updated: 2023/01/04 18:05:18 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{

	public:

		Ice( void );
		Ice( Ice const & src );
		Ice &		operator=( Ice const & rhs );
		~Ice( void );

		// ** --------------------------------- ACCESSOR ------------------------

		// ** --------------------------------- METHODS -------------------------
		virtual AMateria* clone() const;
		void use(ICharacter& target);



	private:

};

// std::ostream &			operator<<( std::ostream & o, Ice const & i );

#endif /* ************************************************************* ICE_H */
