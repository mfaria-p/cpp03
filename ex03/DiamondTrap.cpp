#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), _name("Anonymous")
{
    ClapTrap::_name = _name + "_clap_name";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    std::cout << "DiamondTrap " << this->_name << " is born!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string _name)
    : ClapTrap(_name + "_clap_name"), ScavTrap(_name + "_clap_name"), FragTrap(_name + "_clap_name"), _name(_name)
{
    ClapTrap::_name = _name + "_clap_name";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    std::cout << "DiamondTrap " << this->_name << " is born!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->_name << " died!" << std::endl;
}

void DiamondTrap::whoiam(void)
{
    std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
    std::cout << "My DiamondTrap name is " << this->_name << std::endl;
}