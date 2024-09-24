#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    _name = "Anonymous";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
    *this = obj;
    std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " died!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
    _name = obj._name;
    _hitPoints = obj._hitPoints;
    _energyPoints = obj._energyPoints;
    _attackDamage = obj._attackDamage;
    return *this;
}

void ClapTrap::attack(std::string const & target) {
    if 
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
}




