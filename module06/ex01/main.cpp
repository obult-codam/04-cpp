#include "serialization.hpp"
#include <iostream>

int main(void)
{
    Data testdata;
    testdata.content = "string";
    Data *datatest = &testdata;

    std::cout << datatest << std::endl;

    uintptr_t transfer = serialize(datatest);
    Data *after = deserialize(transfer);

    std::cout << after << std::endl;

    std::cout << "result: " << after->content << std::endl;
}