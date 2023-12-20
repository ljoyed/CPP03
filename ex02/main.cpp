/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:10:54 by loandrad          #+#    #+#             */
/*   Updated: 2023/11/29 16:49:37 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap ft("Hulk");
    std::cout << "Hit : " << ft.getHit() << std::endl;
    std::cout << "Energy : " << ft.getEnergy() << std::endl;
    std::cout << "Damage : " << ft.getDamage() << std::endl;
    ft.highFivesGuys();

    return (0);
}
