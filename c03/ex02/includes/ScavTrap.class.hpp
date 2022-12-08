/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:52:41 by aptive            #+#    #+#             */
/*   Updated: 2022/12/08 17:31:43 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap
{
	public:
				ScavTrap(void);
				ScavTrap( std::string name);
				ScavTrap( ScavTrap const & src);
				ScavTrap &	operator=(ScavTrap const & rhs);
	virtual		~ScavTrap();

	void		attack(const std::string& target);
	void		guardGate();

	private:
		/* data */
};

std::ostream &	operator<<(std::ostream & o, ScavTrap const & rhs);

#endif
