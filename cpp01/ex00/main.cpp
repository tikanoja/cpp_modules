//header

#include "Zombie.hpp"

int main(void){
    Zombie *Shaun = newZombie("Shaun");
    Shaun->announce();
    randomChump("Ed");
    delete Shaun;
    return (0);
}
