#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <string>

typedef struct s_data {
    std::string     content;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif