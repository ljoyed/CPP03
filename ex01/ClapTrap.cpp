/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:11:01 by loandrad          #+#    #+#             */
/*   Updated: 2023/11/30 11:24:41 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Anon"), _hit(10), _energy(10), _damage(0)
{
    std::cout << "ClapTrap " << _name << "'s default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string obj_name) : _name(obj_name), _hit(10), _energy(10), _damage(0)
{
    std::cout << "ClapTrap " << _name << "'s parameterized constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    _name = obj._name;
    _hit = obj._hit;
    _energy = obj._energy;
    _damage = obj._damage;
    std::cout << "ClapTrap " << _name << "'s copy constructor called." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
    
    if (this != &obj)
    {
        _name = obj._name;
        _hit = obj._hit;
        _energy = obj._energy;
        _damage = obj._damage;
    }
    std::cout << "ClapTrap " << _name << "'s copy assignment operator called." << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << "'s destructor called." << std::endl;
}

std::string ClapTrap::getName(void)
{
    return _name;
}
int ClapTrap::getHit(void)
{
    return _hit;
}
int ClapTrap::getEnergy(void)
{
    return _energy;
}
int ClapTrap::getDamage(void)
{
    return _damage;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energy <= 0)
    {
       std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
    _energy -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit <= 0)
    {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " took " << amount << " amount of damage!" << std::endl;
    _hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy <= 0)
    {
       std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
    _energy -= 1;
    _hit += amount;
}
