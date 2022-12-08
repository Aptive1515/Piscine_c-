/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:52:41 by aptive            #+#    #+#             */
/*   Updated: 2022/12/08 19:21:48 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_HPP
# define DIAMONDTRAP_CLASS_HPP

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define END "\033[0m"

# include "ClapTrap.class.hpp"
# include "ScavTrap.class.hpp"
# include "FragTrap.class.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
				DiamondTrap(void);
				DiamondTrap( std::string name);
				DiamondTrap( DiamondTrap const & src);
				DiamondTrap &	operator=(DiamondTrap const & rhs);
	virtual		~DiamondTrap();

	void		attack(const std::string& target);
	void		whoAmI();

//getteur
	std::string		get_name(void) const;

	private:
		std::string	_name;
		/* data */
};

std::ostream &	operator<<(std::ostream & o, DiamondTrap const & rhs);

#endif
