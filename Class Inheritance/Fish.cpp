/// @author Саранчин К.А.
/// Класс Рыбы, подклассы Акула и Дельфин
#include <iostream>
#include <exception>
#include <string>
#include "Fish.h"

using namespace std;

string eraseNulls(double number) {
	string numStr = to_string(number);
	if (numStr[numStr.size() - 1] == '0')
		for (size_t i = numStr.size() - 1; numStr[i] == '0'; i--)
			numStr.erase(i, 1);

	if (numStr[numStr.size() - 1] == '.')
		numStr.erase(numStr.size() - 1, 1);
	return numStr;
}

Aquatic_Inhabitants::Aquatic_Inhabitants()
{
	eat = "Fish";			/// Чем питаются 
	size = 2500;			/// Размер
	habitat = "Sea";		/// Cреда обитания
}

Aquatic_Inhabitants::Aquatic_Inhabitants(string eat1, double size1, string habitat1)
{
	if (eat1 == "") throw invalid_argument("Error: field eat is empty");
	if (size1 != (double)size1) throw invalid_argument("Error: field size is empty");
	if (size1 <= 0) throw invalid_argument("Error: field size <= 0");
	if (habitat1 == "") throw invalid_argument("Error: field habitat is empty");
	habitat = habitat1;
	eat = eat1;
	size = size1;

}

Aquatic_Inhabitants::~Aquatic_Inhabitants() {}

string Aquatic_Inhabitants::toString() {
	return eat + " " + habitat + " " + eraseNulls(size) + " " + "sm";
}

void Aquatic_Inhabitants::set_size(double l) {
	if (l != (double)l) throw invalid_argument("Error: field size is empty");
	if (l <= 0) throw invalid_argument("Error: field size <= 0");
	size = l;
}

double Aquatic_Inhabitants::get_size() {
	return size;
}


void Aquatic_Inhabitants::set_eat(string eat1) {
	if (eat1 == "") throw invalid_argument("Error: field eat is empty");
	eat = eat1;
}

string Aquatic_Inhabitants::get_eat() {
	return eat;
} 

void Aquatic_Inhabitants::set_habitat(string habitat1) {
	if (habitat1 == "") throw invalid_argument("Error: field habitat is empty");
	habitat = habitat1;
}

string Aquatic_Inhabitants::get_habitat() {
	return habitat;
}



Dolphin::Dolphin() {
	classDolphin = "Delph";		/// Вид дельфина
	Echolocation = 1;
}

Dolphin::Dolphin(string class1, bool echo) {
	if (class1 == "") throw invalid_argument("Error: field class is empty");
	if (echo != 1 && echo != 0) throw invalid_argument("Error: field echo is empty");
	classDolphin = class1;
	Echolocation = echo;
}

Dolphin::~Dolphin() {}

void Dolphin::set_parametr(string eat1, double size1, string habitat1) {
	if (eat1 == "") throw invalid_argument("Error: field eat is empty");
	if (size1 != (double)size1) throw invalid_argument("Error: field size is empty");
	if (size1 <= 0) throw invalid_argument("Error: field size <= 0");
	eat = eat1;
	size = size1;
	habitat = habitat1;
}

string Dolphin::toString() {
	return Aquatic_Inhabitants::toString() + " " + "class dolphin: " + classDolphin + " " + "echo location: " + (Echolocation == 1 ? "yes" : "no") + " ";
}

void Dolphin::set_сlass(string class1) {
	if (class1 == "") throw invalid_argument("Error: field class is empty");
	classDolphin = class1;
}

string Dolphin::get_сlass() {
	return classDolphin;
}

void Dolphin::set_echo(bool echo) {
	if (echo != 1 && echo != 0) throw invalid_argument("Error: field echo is empty");
	Echolocation = echo;
}

bool Dolphin::get_echo() {
	return Echolocation;
}

Shark::Shark() {
	classShark = "Tiger";		/// Вид акулы
	painImpulses = 0;			/// Болевые импульсы
	teeth = 500;
}

Shark::Shark(string class1, bool pain) {
	if (pain != 1 && pain != 0) throw invalid_argument("Error: field pain is empty");
	if (class1 == "") throw invalid_argument("Error: field class is empty");
	classShark = class1;
	painImpulses = pain; 

}

Shark::~Shark() {}

void Shark::set_parametr(string eat1, double size1) {
	if (eat1 == "") throw invalid_argument("Error: field eat is empty");
	if (size1 != (double)size1) throw invalid_argument("Error: field size is empty");
	if (size1 <= 0) throw invalid_argument("Error: field size <= 0");
	eat = eat1;
	size = size1;
}

string Shark::toString() {
	return Aquatic_Inhabitants::toString() + " " + "class Shark: " + classShark + " " + "pain impulses: " + (painImpulses == 1 ? "yes" : "no") + " ";
}

void Shark::set_class1(string class1) {
	if (class1 == "") throw invalid_argument("Error: field class is empty");
	classShark = class1;
}

string Shark::get_class1() {
	return classShark;
}

void Shark::set_pain(bool pain) {
	if (pain != 1 && pain != 0 ) throw invalid_argument("Error: field pain is empty");
	painImpulses = pain;
}

bool Shark::get_pain() {
	return painImpulses;
}

void Shark::set_teeth(double teeths) {
	if (teeths != (double)teeths) throw invalid_argument("Error: field teeth  is empty");
	if (teeths <= 0) throw invalid_argument("Error: field teeth  <= 0");
	teeth = teeths;
}

double Shark::get_teeth() {
	return teeth;
}









