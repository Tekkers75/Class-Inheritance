/// @author Саранчин К.А.
/// Основная программа 
#include <iostream>
#include <exception>
#include "Fish.h"

using namespace std;

int main() {
	try {
		Aquatic_Inhabitants Fish("Fish",2500, "Sea");

		Dolphin Dolhp("Mleko","Have");
		Dolhp.set_eat("Small Fish");
		Dolhp.set_parametr("Fish", 2400, "sea");

		Shark Shark("Big fish", "Don't");
		Shark.set_eat("Eat fish and man");
		Shark.set_class1("fish123");
		Shark.set_parametr("Eat man", 2865);
		Shark.set_size(6262);
		Shark.set_pain("don't");

		cout << Fish.toString() << endl;
		cout << Dolhp.toString() << endl;
		cout << Shark.toString() << endl;

	}
	catch (invalid_argument e) {
		cout << e.what();
	}
}