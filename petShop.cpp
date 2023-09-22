
#include "VirtualPet.h"
#include "Digimon.h"
#include "Pikachu.h"
#include "Gatomon.h"
#include "Pokemon.h"
using namespace std;
int main() {
	VirtualPet myLittleBoringPet("Basic Pet");
	myLittleBoringPet.feed();
	myLittleBoringPet.play();
	myLittleBoringPet.makeSound();

	cout << "Name: " << myLittleBoringPet.getName() << endl;
	cout << "Happiness: " << myLittleBoringPet.getHappiness() << endl;
	cout << "Hunger: " << myLittleBoringPet.getHunger() << endl;

	Pokemon pokemanz("Pokemanz", "Pokespeez");
	pokemanz.feed();
	pokemanz.play();
	pokemanz.makeSound();

	cout << "Name: " << pokemanz.getName() << endl;
	cout << "Happiness: " << pokemanz.getHappiness() << endl;
	cout << "Hunger: " << pokemanz.getHunger() << endl;
	cout << "Health: " << pokemanz.getHealth() << endl;
	cout << "Species: " << pokemanz.getSpecies() << endl;
// Create a Digimon instance
    Digimon digimon("Agumon", 80, 30, "Fire");

    // Call Digimon's unique member function
    digimon.useSpecialAttack();

    // Display Digimon's information
    cout << "Name: " << digimon.getName() << endl;
    cout << "Element: " << digimon.getElement() << endl;
    cout << "Happiness: " << digimon.getHappiness() << endl;
    cout << "Hunger: " << digimon.getHunger() << endl;

    // Create a Pikachu instance
    Pikachu pikachu("Sparky", "Electric", 100, 50);

    // Call Pikachu's unique member function
    pikachu.useElectricShock();

    // Display Pikachu's information
    cout << "Name: " << pikachu.getName() << endl;
    cout << "Species: " << pikachu.getSpecies() << endl;
    cout << "Health: " << pikachu.getHealth() << endl;
    cout << "Electric Power: " << pikachu.getElectricPower() << endl;

    // Create a Gatomon instance
    Gatomon gatomon("Whiskers", "Light", 90, 40, 60);

    // Call Gatomon's unique member function
    gatomon.useCatClawAttack();

    // Display Gatomon's information
    cout << "Name: " << gatomon.getName() << endl;
    cout << "Element: " << gatomon.getElement() << endl;
    cout << "Happiness: " << gatomon.getHappiness() << endl;
    cout << "Hunger: " << gatomon.getHunger() << endl;
    cout << "Cat Claw Sharpness: " << gatomon.useCatClawAttack() << endl;

	return 0;
}
