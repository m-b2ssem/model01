#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N < 1)
    {
        std::cout << "please ensure to enter greater then 0 number of Zombies";
        std::cout <<std::endl;
        return (NULL);
    }
    Zombie* zoms = new Zombie[N];
    if (zoms == NULL)
    {
        std::cout << "Failed to allocate the Zombies." <<std::endl;
        return (NULL);
    }
    for (int i = 0; i < N; i++)
    {
        zoms[i].Setter(name);
        zoms[i].announce();
    }
    return zoms;
}