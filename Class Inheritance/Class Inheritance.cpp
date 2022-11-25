/// @author Саранчин К.А.
/// Основная программа 
#include <iostream>
#include <exception>
#include "Fish.h"

using namespace std;

int main() {
	try {
		Aquatic_Inhabitants Fish("Fish",2500, "Sea");

		Dolphin Dolhp1("Mleko","Have");
		Dolhp1.set_eat("Small Fish");
		Dolhp1.set_parametr("Fish", 2400, "sea");

		Shark Shark1("Big fish",0);
		Shark1.set_eat("Eat fish and man");
		Shark1.set_class1("fish123");
		Shark1.set_parametr("Eat man", 2865);
		Shark1.set_size(6262);
		Shark1.set_pain(0);


		cout << Fish.toString() << endl;
		cout << Dolhp1.toString() << endl;
		cout << Shark1.toString() << endl;

		Aquatic_Inhabitants Fish1;
		Dolphin Dolhp2;
		Aquatic_Inhabitants* Fish2 = &Dolhp2;
		Aquatic_Inhabitants* Fish3 = new Shark;

		cout << Fish2->toString() << endl;
		cout << Fish3->toString() << endl;


	}
	catch (invalid_argument e) {
		cout << e.what();
	}
}