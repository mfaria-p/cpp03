#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->_name = "Anonymous";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << _name << " is born!" << std::endl;
}

FragTrap::FragTrap( std::string _name ) : ClapTrap( _name )
{
    this->_name = _name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
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