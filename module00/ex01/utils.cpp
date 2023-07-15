#include <utils.hpp>

std::string phonebook_truncate(std::string input) {
    if (input.length() > 10)
    {
        input.resize(9);
        input.append(".");
    }
    return input;
}

// int main (void) {
//     std::cout << std::setw(10) << "stringstring" << std::endl;
// }