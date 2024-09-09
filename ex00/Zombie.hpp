#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie(std:: string name);
    void Setter(std:: string name);
    void announce();
    ~Zombie();
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);;

#endif // ZOMBIE
