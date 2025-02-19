/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 07:01:28 by albillie          #+#    #+#             */
/*   Updated: 2025/02/13 20:05:42 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		// Canonical Form
		ScavTrap();
		ScavTrap(const ScavTrap &scavTrap);
		ScavTrap(std::string name);
		ScavTrap &operator=(const ScavTrap &assign);
		~ScavTrap();
		// Game Functions
		void guardGuate();
		void attack(const std::string &target);
		void takeDamage(const unsigned int amount);
		void beRepaired(const unsigned int amount);
};

std::ostream &operator<<(std::ostream &out, const ScavTrap &ScavTrap);

#endif
