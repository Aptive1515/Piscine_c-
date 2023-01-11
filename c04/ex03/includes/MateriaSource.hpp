/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:34:20 by aptive            #+#    #+#             */
/*   Updated: 2023/01/04 15:41:14 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{

	public:

					MateriaSource( void );
					MateriaSource( MateriaSource const & src );
		virtual		~MateriaSource( void );

		MateriaSource &		operator=( MateriaSource const & rhs );

		// ** --------------------------------- METHODS -------------------------
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);

	private:

		AMateria* _materia[4];



};

#endif /* *************************************************** MATERIASOURCE_H */
