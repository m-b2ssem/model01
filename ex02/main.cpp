#include <string>
#include <iostream>

int main(void)
{
    std::string brain =  "HI THIS IS BRAIN";
    std::string* braintPtr = &brain;
    std::string& brainRef = brain;


    std::cout << "the variable address is: ";
    std::cout << &brain <<std::endl; 
    std::cout << "the pointer address is: ";
    std::cout << &braintPtr <<std::endl; 
    std::cout << "the reference address is: ";
    std::cout << &brainRef <<std::endl; 

    std::cout << "the variable value is: ";
    std::cout << brain <<std::endl; 
    std::cout << "the variable value is: ";
    std::cout << braintPtr <<std::endl;
    std::cout << "the variable value is: ";
    std::cout << brainRef <<std::endl; 
}