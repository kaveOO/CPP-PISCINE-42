/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 02:13:51 by albillie          #+#    #+#             */
/*   Updated: 2025/02/13 07:06:20 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	private:
		// Attributes
		std::string name;
		int	hitPoints;
		int energyPoints;
		int attackDamage;
	public:
		// Canonical Form
		ClapTrap();
		ClapTrap(const ClapTrap &ClapTrap);
		ClapTrap(std::string name);
		ClapTrap &operator=(const ClapTrap &copy);
		~ClapTrap();
		// Game Functions
		void attack(const std::string &target);
		void takeDamage(const unsigned int amount);
		void beRepaired(const unsigned int amount);
		// Getters
		std::string getName() const;
		int getHitPoints() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;
		// Setters
		void setName(const std::string newName);
		void setHitPoints(const int newHitPoints);
		void setEnergyPoints(const int newEnergyPoints);
		void setAttackDamage(const int newAttackDamage);
};

std::ostream &operator<<(std::ostream &out, const ClapTrap &ClapTrap);
