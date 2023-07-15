#include <Weapon.hpp>

Weapon::Weapon() {
}

Weapon::Weapon( std::string type ) { // maybe better way in hamanA
	this->_type = type;
}

Weapon::~Weapon() {
}

const std::string& Weapon::getType() {
	return (this->_type);
}

void	Weapon::setType( std::string type ) {
	this->_type = type;
}
