//header

#include "Zombie.hpp"

int main(void){
    Zombie *Shaun = newZombie("Shaun");
    Shaun->announce();
    delete Shaun;
    randomChump("Ed");
    return (0);
}
