
#include "Pirate.h"


Pirate::Pirate(const string& name, unsigned int bounty): name(name), bounty(bounty) {}


void Pirate::setName(const string& name){
    this->name = name;
}

void Pirate::setBounty(unsigned int bounty) {
    this->bounty = bounty;
}

unsigned int Pirate::getBounty() {
    return bounty;
}

std::string Pirate::getName(){
    return name;
}


std::ostream &operator<<(std::ostream &os, const Pirate &pirate){
    os << pirate.name << std::endl << pirate.bounty;
    return os;
}
