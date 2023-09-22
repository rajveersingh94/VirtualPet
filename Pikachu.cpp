#include "Pikachu.h"

Pikachu::Pikachu(const string& name, const string& species, int health, int electricPower)
    : Pokemon(name, species, health), electricPower(electricPower) {}

void Pikachu::useElectricShock() {
    cout << getName() << " uses Electric Shock!" << endl;
    // Implement the behavior of using Electric Shock here.
}
