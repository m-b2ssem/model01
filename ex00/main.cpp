#include "Zombie.hpp"

int main()
{
    Zombie *b =  newZombie("bassem");
    b->announce();
    delete b;
    randomChump("bassem");
    return 0;
}