
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(){
    std::cout << "FragTrap constructor called (void input)" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    std::cout << "FragTrap constructor called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy){
    std::cout << "FragTrap copy constructor called" << std::endl;
    return ;
}

FragTrap& FragTrap::operator=(const FragTrap& copy){
    std::cout << "FragTrap copy assignment constructor called" << std::endl;
    if (this != &copy){
        this->name = copy.name;
        this->hit_points = copy.hit_points;
        this->energy_points = copy.energy_points;
        this->attack_damage = copy.attack_damage;
    }
    return (*this);
}

FragTrap::~FragTrap(void){
    std::cout << "FragTrap destructor called" << std::endl;
    return ;
}

void FragTrap::highFivesGuys(void){
    if (this->hit_points == 0){
        std::cout << this->name << " is dead and not willing to give you a high five." << std::endl;
        return ;
    } else if (this->energy_points == 0){
        std::cout << this->name << " is out of energy. A simple high five is too much!" << std::endl;
        return ;
    }
    std::cout << "FragTrap looks at you, visibly excited for a high five. Don't leave a friend hanging!" << std::endl;
    std::cout << "Press Enter to give " << this->name << " a high five!" << std::endl;
    std::cin.ignore();
    std::cout << "*SLAP*" << std::endl << this->name << " seems satisfied." << std::endl;
}

