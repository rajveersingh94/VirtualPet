#include "Gatomon.h"

Gatomon::Gatomon(const string& name, const string& element, int happiness, int hunger, int catClawSharpness)
    : Digimon(name, happiness, hunger, element), catClawSharpness(catClawSharpness) {}

void Gatomon::useCatClawAttack() {
    cout << getName() << " uses Cat Claw Attack!" << endl;
    // Implement the behavior of using a Cat Claw Attack here.
}

int getCatClawSharpness()const{
	return catClawSharpness;
}

