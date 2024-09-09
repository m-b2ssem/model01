#include "File.hpp"

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <string to replace> <replacement string>" << std::endl;
        return 1;
    }

    replaceInFile(argv[1], argv[2], argv[3]);
    return 0;
}
