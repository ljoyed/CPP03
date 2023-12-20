/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:10:54 by loandrad          #+#    #+#             */
/*   Updated: 2023/11/29 11:05:37 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap ct1;
    ClapTrap ct2("Ironman");
    std::cout << "Hit : " << ct2.getHit() << std::endl;
    std::cout << "Energy : " << ct2.getEnergy() << std::endl;
    std::cout << "Damage : " << ct2.getDamage() << std::endl;
    ct2.attack("Thor");
    std::cout << "After attack!!" << std::endl;
    std::cout << "Hit : " << ct2.getHit() << std::endl;
    std::cout << "Energy : " << ct2.getEnergy() << std::endl;
    std::cout << "Damage : " << ct2.getDamage() << std::endl;
    return (0);
}
