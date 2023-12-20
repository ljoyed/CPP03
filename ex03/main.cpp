/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:10:54 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/11 10:47:37 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << "Everything ClapTrap\n" << std::endl;
	{
		ClapTrap a;
		ClapTrap b("Hulk");

		a.attack("Joker");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("Dracula");
		b.attack("Terminator");
		b.beRepaired(3);
	}

	std::cout << "\n\nEverything ScavTrap\n" << std::endl;
	{
		ScavTrap a;
		ScavTrap b("Scav");

		a.attack("Godzilla");
		a.beRepaired(2);
		a.takeDamage(2);
		a.beRepaired(2);
		a.guardGate();
		b.attack("King Kong");
		b.takeDamage(10);
		b.takeDamage(15);
		b.attack("King Kong");
	}

	std::cout << "\n\nEverything FragTrap\n" << std::endl;
	{
		FragTrap a;
		FragTrap b("Frag");

		a.highFivesGuys();
		a.attack("Lex");
		a.takeDamage(10);
		a.attack("Lex");
		b.highFivesGuys();
		b.attack("Magneto");
	}
	
	std::cout << "\n\nEverything DiamondTrap\n" << std::endl;
	{
		DiamondTrap a;
		DiamondTrap b("Diamond");
		DiamondTrap c(a);

		a.whoAmI();
		a.attack("Super Villian");
		b.whoAmI();
		b.attack("Mega Villian");
		c.whoAmI();
	}
	return (0);
}
