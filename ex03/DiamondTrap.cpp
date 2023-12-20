/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:05:00 by loandrad          #+#    #+#             */
/*   Updated: 2023/12/01 15:55:33 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Anon_clap_trap")
{
    _name = "Anon";
    _hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _damage = FragTrap::_damage;
    std::cout << "DiamondTrap " << _name << "'s default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string obj_name) : ClapTrap(obj_name + "_clap_trap")
{
    _name = obj_name;
    _hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _damage = FragTrap::_damage;
    std::cout << "DiamondTrap " << _name << "'s parameterized constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj): ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
   *this = obj;
    std::cout << "DiamondTrap " << _name << "'s copy constructor called." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj)
{
    
    if (this != &obj)
    {
        _name = obj._name + "_clap_trap";
        _hit = obj._hit;
        _energy = obj._energy;
        _damage = obj._damage;
    }
    std::cout << "DiamondTrap " << _name << "'s copy assignment operator called." << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << "'s destructor called." << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "Hi, I'm DiamondTrap " << _name << " and I come from ClapTrap " << ClapTrap::_name << std::endl;
}