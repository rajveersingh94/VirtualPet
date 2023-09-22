#include "Pikachu.h"

Pikachu::Pikachu(const string& name, const string& species, int health, int ElectricPower)
    : Pokemon(name, species){
	    electricPower = ElectricPower;
    }

int Pikachu::getElectricPower() const {
	return electricPower;
}

void Pikachu::useElectricShock() {
    cout << getName() << " uses Electric Shock!" << endl;
    // Implement the behavior of using Electric Shock here.
}
