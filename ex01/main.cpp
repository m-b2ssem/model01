#include "Zombie.hpp"

int main()
{
    Zombie* zoms = zombieHorde(10, "beee");
    delete[] zoms;
    return 0;
}