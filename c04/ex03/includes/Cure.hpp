/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:27:23 by aptive            #+#    #+#             */
/*   Updated: 2023/01/04 18:10:21 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{

	public:

		Cure( void );
		Cure( Cure const & src );
		~Cure( void );

		Cure &		operator=( Cure const & rhs );

		// ** --------------------------------- ACCESSOR ------------------------

		// ** --------------------------------- METHODS -------------------------
		virtual AMateria* clone() const;
		void use(ICharacter& target);



	private:


};

#endif /* ************************************************************* Cure_H */
