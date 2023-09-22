#include "Digimon.h"

Digimon::Digimon(const string& name, int happiness, int hunger, const string& element)
    : VirtualPet(name, happiness, hunger), element(element) {}

void Digimon::useSpecialAttack() {
    cout << getName() << " uses Special Attack!" << endl;
    // Implement the behavior of using a Special Attack here.
}
