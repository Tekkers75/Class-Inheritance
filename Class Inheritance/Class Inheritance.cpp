/// @author Саранчин К.А.
/// Основная программа 
#include <iostream>
#include <exception>
#include "Fish.h"

using namespace std;

int main() {
	try {
		Aquatic_Inhabitants Fish("Fish",2500, "Sea");
		cout << Fish.toString() << endl << endl;

		Dolphin Dolhp1("killer whales",1);
		Dolhp1.set_parametr("Whales", 2400, "Sea");
		cout << Dolhp1.toString() << endl;

		Dolphin Dolhp4;
		Dolhp4.set_size(3800);
		Dolhp4.set_сlass("striped dolphin");
		Dolhp4.set_echo(1);
		cout << Dolhp4.toString() << endl;


		Shark Shark1("White",0);
		Shark1.set_parametr("all", 4250,"South sea");
		cout << Shark1.toString() << endl;

		Shark Shark4;
		Shark4.set_class1("Whale");
		Shark4.set_eat("Plankton");
		Shark4.set_size(7730);
		cout << Shark4.toString() << endl;
		
		
		

		Aquatic_Inhabitants Fish1;
		Dolphin Dolhp2;
		Aquatic_Inhabitants* Fish2 = &Dolhp2;	/// Указатель на тип Dolphin
		Aquatic_Inhabitants* Fish3 = new Shark; /// Создание динамического объекта

		cout << Fish2->toString() << endl;
		cout << Fish3->toString() << endl;		/// Программа сама распознает какой тип хранится в Tool_2 и Tool_3


	}
	catch (invalid_argument e) {
		cout << e.what();
	}
}