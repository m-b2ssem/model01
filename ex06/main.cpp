#include "Harl.hpp"
#include <string>

int main(int argc, char* argv[]) {
    if (argc == 2) {
        Harl harl;
        std::string level(argv[1]);
        harl.filterComplaints(level);
    } else {
        std::cout << "Usage: ./harlFilter [DEBUG|INFO|WARNING|ERROR]" << std::endl;
    }
    return 0;
}