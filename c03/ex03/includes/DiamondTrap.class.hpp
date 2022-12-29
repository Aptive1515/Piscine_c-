/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:52:41 by aptive            #+#    #+#             */
/*   Updated: 2022/12/16 20:28:59 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_HPP
# define DIAMONDTRAP_CLASS_HPP

# include "ClapTrap.class.hpp"
# include "ScavTrap.class.hpp"
# include "FragTrap.class.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
	public:
				DiamondTrap(void);
				DiamondTrap( std::string name);
				DiamondTrap( DiamondTrap const & src);
				DiamondTrap &	operator=(DiamondTrap const & rhs);
	virtual		~DiamondTrap();

	// void		attack(const std::string& target);
	void		whoAmI();
	using		ScavTrap::attack;

//getteur
	std::string		get_name(void) const;

	private:
		std::string	_name;
	using FragTrap::_energy;
		/* data */
};

std::ostream &	operator<<(std::ostream & o, DiamondTrap const & rhs);

#endif
