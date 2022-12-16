/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:29:35 by aptive            #+#    #+#             */
/*   Updated: 2022/12/16 19:41:28 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

#include <iostream>

class ClapTrap
{
public:
				ClapTrap(void);
				ClapTrap(std::string name);
				ClapTrap( ClapTrap const & src);
				ClapTrap &	operator=(ClapTrap const & rhs);
	virtual		~ClapTrap();

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

// setteur
	void		set_name(std::string name);
	void		set_hit(unsigned int hit);
	void		set_energy(unsigned int energy);
	void		set_attack(unsigned int attack);

// getteur
	std::string		get_name(void) const;
	unsigned int	get_hit(void) const;
	unsigned int	get_energy(void) const;
	unsigned int	get_attack(void) const;


protected:
	std::string				_name;
	unsigned int			_hit;
	unsigned int			_energy;
	unsigned int			_attack;


};

std::ostream &	operator<<(std::ostream & o, ClapTrap const & rhs);




#endif
