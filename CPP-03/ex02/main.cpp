/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 08:56:36 by albillie          #+#    #+#             */
/*   Updated: 2025/02/13 11:03:50 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

int main()
{
	ClapTrap clapTrap("Goblin's King");
	clapTrap.attack("gbruscan");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);

	std::cout << clapTrap << std::endl;

	ClapTrap clapTroup;
	clapTroup.takeDamage(15);
	clapTroup.takeDamage(15000);

	std::cout << std::endl;

	ScavTrap thomas("thomiannnnnnnnnn");
	thomas.attack("jbergos");
	thomas.takeDamage(99);
	thomas.beRepaired(34);
	thomas.guardGuate();
	std::cout << thomas << std::endl;

	FragTrap damian("damien");
	damian.attack("albillie");
	damian.attack("jbergos");
	damian.takeDamage(99);
	damian.beRepaired(34);
	damian.highFivesGuys();
	std::cout << damian << std::endl;
	std::cout << std::endl;

	return 0;
}
