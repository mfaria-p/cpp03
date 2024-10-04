#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->_name = "Anonymous";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "FragTrap " << _name << " is born!" << std::endl;
}

FragTrap::FragTrap( std::string _name ) : ClapTrap( _name )
{
    this->_name = _name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "FragTrap " << _name << " is born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj) {
    *this = obj;
    std::cout << "FragTrap " << _name << " is born!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " died!" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
    std::cout << "FragTrap " << _name << " gives you a highfive!" << std::endl;
}

void FragTrap::attack( const std::string& target )
{
    if (_energyPoints >= 0)
        _energyPoints--;
    else
    {
        std::cout << "FragTrap " << _name << " doesn't have enough energy to attack!" << std::endl;
        return;
    }
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}