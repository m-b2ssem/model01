#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    void Setter(std:: string name);
    void announce();
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );


#endif // ZOMBIE
