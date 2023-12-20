/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:39:21 by loandrad          #+#    #+#             */
/*   Updated: 2023/11/30 11:36:23 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _name = "Anon";
    _hit = 100;
    _energy = 100;
    _damage = 30;
    std::cout << "FragTrap " << _name << "'s default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string obj_name)
{
    _name = obj_name;
    _hit = 100;
    _energy = 100;
    _damage = 30;
    std::cout << "FragTrap " << _name << "'s parameterized constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
    _name = obj._name;
    _hit = obj._hit;
    _energy = obj._energy;
    _damage = obj._damage;
    std::cout << "FragTrap " << _name << "'s copy constructor called." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &obj)
{
    
    if (this != &obj)
    {
        _name = obj._name;
        _hit = obj._hit;
        _energy = obj._energy;
        _damage = obj._damage;
    }
    std::cout << "FragTrap " << _name << "'s copy assignment operator called." << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << "'s destructor called." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " gives out a high five." << std::endl;
}
