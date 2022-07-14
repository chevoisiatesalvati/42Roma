#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitpoints(10), _energy_point(10), _attack_manage(0)
{
    std::cout << "Name : " << "unknown" << " hitpoint: " << this->_hitpoints << " point: " << this->_energy_point << " attack manage: " << this->_attack_manage << std::endl;
}

ClapTrap::~ClapTrap()
{
    if (this->_name != "")
        std::cout << "Destructor called for " << this->_name << std::endl;
    else
        std::cout << "Destructor called for <unknown>" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :  _name(name), _hitpoints(10), _energy_point(10), _attack_manage(0)
{
    std::cout << "Name : " << this->_name << " hitpoint: " << this->_hitpoints << " point: "  << this->_energy_point << " attack manage: " << this->_attack_manage << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &obj)
        return (*this);
    this->_name = obj._name;
    this->_hitpoints = obj._hitpoints;
    this->_energy_point = obj._energy_point;
    this->_attack_manage = obj._attack_manage;
    return (*this);
}

void ClapTrap::attack(std::string const & target)
{
    if (this->_energy_point >= 10)
    {
        std::cout << this->_name << " attack " << target << " ,causing " << this->_hitpoints << " points of damage!" << std::endl;
        this->_energy_point -= 10;
    }
    else
        std::cout << "Low energy points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints <= 0)
    {
       std::cout << "Name : " << this->_name << " is already died" << std::endl;
       return ;
    }
    std::cout << this->_name << " has taken damage for " << amount << std::endl;
    this->_hitpoints -= amount;
    std::cout << "Name : " << this->_name << " hitpoint: " << this->_hitpoints << " point: "  << this->_energy_point << " attack manage: " << this->_attack_manage << std::endl;
    if (_hitpoints <= 0)
       std::cout << "Name : " << this->_name << " died" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << this->_name << " has taken repaired for " << amount << std::endl;
    this->_hitpoints += amount;
    this->_energy_point += amount;
    std::cout << "Name : " << this->_name << " hitpoint: " << this->_hitpoints << ", energy point: "  << this->_energy_point << ", attack manage: " << this->_attack_manage << std::endl;
}