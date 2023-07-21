//header

#include "Zombie.hpp"

void	Zombie::announce( void ){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name){
    this->name = name;
    std::cout << "Constructed Zombie: " << name << std::endl;
}

Zombie::~Zombie(void){
    std::cout << "Destroyed Zombie: " << this->name << std::endl;
}
