/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:52:41 by aptive            #+#    #+#             */
/*   Updated: 2022/12/08 18:20:30 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include "ClapTrap.class.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
					FragTrap(void);
					FragTrap( std::string name);
					FragTrap( FragTrap const & src);
					FragTrap &	operator=(FragTrap const & rhs);
		virtual		~FragTrap();

		void		attack(const std::string& target);
		void		highFivesGuys(void);

	private:

		/* data */
};

std::ostream &	operator<<(std::ostream & o, FragTrap const & rhs);

#endif
