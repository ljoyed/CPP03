/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:16:25 by loandrad          #+#    #+#             */
/*   Updated: 2023/11/30 11:25:14 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _name = "Anon";
    _hit = 100;
    _energy = 50;
    _damage = 20;
    std::cout << "ScavTrap " << _name << "'s default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string obj_name)
{
    _name = obj_name;
    _hit = 100;
    _energy = 50;
    _damage = 20;
    std::cout << "ScavTrap " << _name << "'s parameterized constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    _name = obj._name;
    _hit = obj._hit;
    _energy = obj._energy;
    _damage = obj._damage;
    std::cout << "ScavTrap " << _name << "'s copy constructor called." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
    
    if (this != &obj)
    {
        _name = obj._name;
        _hit = obj._hit;
        _energy = obj._energy;
        _damage = obj._damage;
    }
    std::cout << "ScavTrap " << _name << "'s copy assignment operator called." << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << "'s destructor called." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_energy <= 0)
    {
       std::cout << "ScavTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
    _energy -= 1;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
