#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "Zombie "+ this->_name +" was destroyded" <<std::endl;
}

void Zombie::Setter(std:: string name)
{
    this->_name = name;
}

void Zombie::announce(void)
{
    std::cout << this->_name + ": BraiiiiiiinnnzzzZ..." << std:: endl;
}