#include "File.hpp"


void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream infile(filename.c_str());
    if (!infile.is_open()) {
        std::cerr << "Error: File cannot be opened." << std::endl;
        return;
    }

    std::stringstream buffer;
    buffer << infile.rdbuf();
    infile.close();

    std::string content = buffer.str();
    size_t pos = 0;

    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content = content.substr(0, pos) + s2 + content.substr(pos + s1.length());
        pos += s2.length();
    }

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile.is_open()) {
        std::cerr << "Error: Output file cannot be created." << std::endl;
        return;
    }

    outfile << content;
    outfile.close();
}