/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:10:54 by loandrad          #+#    #+#             */
/*   Updated: 2023/11/30 11:29:54 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap st2("Hulk");
    std::cout << "Hit : " << st2.getHit() << std::endl;
    std::cout << "Energy : " << st2.getEnergy() << std::endl;
    std::cout << "Damage : " << st2.getDamage() << std::endl;
    st2.attack("Thor");
    std::cout << "After attack!!" << std::endl;
    std::cout << "Hit : " << st2.getHit() << std::endl;
    std::cout << "Energy : " << st2.getEnergy() << std::endl;
    std::cout << "Damage : " << st2.getDamage() << std::endl;

    return (0);
}
