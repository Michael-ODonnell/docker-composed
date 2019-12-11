#include <iostream>
#include <string>

int main(int argc, char** argv) {
    std::cout << "Starting App" << std::endl;
    for(auto i = 1; i < argc; ++i){
        std::string arg = argv[i];
        std::cout << arg << std::endl;
    }

    std::cout << "Exiting App" << std::endl;
    return 0;
}