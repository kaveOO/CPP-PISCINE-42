/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 07:01:28 by albillie          #+#    #+#             */
/*   Updated: 2025/02/13 09:03:10 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		// Canonical Form
		ScavTrap();
		ScavTrap(const ScavTrap &scavTrap);
		ScavTrap(std::string Name);
		ScavTrap &operator=(const ScavTrap &assign);
		~ScavTrap();
		// Game Functions
		void guardGuate();
		void attack(const std::string &target);
};

std::ostream &operator<<(std::ostream &out, const ScavTrap &ScavTrap);
