/// @author Саранчин К.А.
/// Класс Рыбы, подклассы Акула и Дельфин
#include <iostream>
#include <exception>
#include <string>
#include "Fish.h"

using namespace std;

/// Процедура перевода из double в string
string eraseNulls(double number) {
	string numStr = to_string(number);
	if (numStr[numStr.size() - 1] == '0')
		for (size_t i = numStr.size() - 1; numStr[i] == '0'; i--)
			numStr.erase(i, 1);

	if (numStr[numStr.size() - 1] == '.')
		numStr.erase(numStr.size() - 1, 1);
	return numStr;
}

/// Конструктор без параметров
Aquatic_Inhabitants::Aquatic_Inhabitants()
{
	eat = "Fish";			/// Чем питаются 
	size = 2500;			/// Размер
	habitat = "Sea";		/// Cреда обитания
}

/// Конструктор c параметрами
Aquatic_Inhabitants::Aquatic_Inhabitants(const string eat1, double size1, const  string habitat1)
{
	if (eat1 == "") throw invalid_argument("Error: field eat is empty");
	if (size1 != (double)size1) throw invalid_argument("Error: field size is empty");
	if (size1 <= 0) throw invalid_argument("Error: field size <= 0");
	if (habitat1 == "") throw invalid_argument("Error: field habitat is empty");
	habitat = habitat1;
	eat = eat1;
	size = size1;

}

/// Деструктор
Aquatic_Inhabitants::~Aquatic_Inhabitants() {}

/// виртуальный вывод в одну строку
string Aquatic_Inhabitants::toString() {
	return "Eat - " + eat + "; " + "Habitat - " + habitat + "; " + "Size - " + eraseNulls(size) + " " + "sm; ";
}

/// Установить длину
void Aquatic_Inhabitants::set_size(double l) {
	if (l != (double)l) throw invalid_argument("Error: field size is empty");
	if (l <= 0) throw invalid_argument("Error: field size <= 0");
	size = l;
}

/// Вернуть длину
double Aquatic_Inhabitants::get_size() const {
	return size;
}

/// Установить рацион питания
void Aquatic_Inhabitants::set_eat(const string eat1) {
	if (eat1 == "") throw invalid_argument("Error: field eat is empty");
	eat = eat1;
}

/// Вернуть рацион питания
string Aquatic_Inhabitants::get_eat() const {
	return eat;
} 

/// Установить место обитания
void Aquatic_Inhabitants::set_habitat(const string habitat1) {
	if (habitat1 == "") throw invalid_argument("Error: field habitat is empty");
	habitat = habitat1;
}

/// Вернуть место обитания
string Aquatic_Inhabitants::get_habitat() const {
	return habitat;
}


/// Класс дельфин
/// Конструктор без параметров
Dolphin::Dolphin() {
	classDolphin = "Killer whales";		/// Вид дельфина
	Echolocation = 1;			/// Есть ли эхолокация
}

/// Конструктор с параметрами
Dolphin::Dolphin(const string class1, bool echo) {
	if (class1 == "") throw invalid_argument("Error: field class is empty");
	if (echo != 1 && echo != 0) throw invalid_argument("Error: field echo is empty");
	classDolphin = class1;
	Echolocation = echo;
}

/// Деструктор
Dolphin::~Dolphin() {}

/// Установить параметры из основного класса
void Dolphin::set_parametr(const string eat1, double size1, const  string habitat1) {
	if (eat1 == "") throw invalid_argument("Error: field eat is empty");
	if (size1 != (double)size1) throw invalid_argument("Error: field size is empty");
	if (size1 <= 0) throw invalid_argument("Error: field size <= 0");
	eat = eat1;
	size = size1;
	habitat = habitat1;
}

/// Виртуальный вывод в одну строку
string Dolphin::toString() {
	return "Dolphin class - " + classDolphin + "; " + Aquatic_Inhabitants::toString() + "echolocation - " + (Echolocation == 1 ? "yes" : "no") + ";\n ";
}

/// Установить вид
void Dolphin::set_сlass(const string class1) {
	if (class1 == "") throw invalid_argument("Error: field class is empty");
	classDolphin = class1;
}

/// Вернуть вид
string Dolphin::get_сlass()const {
	return classDolphin;
}

/// Установить эхолокацию
void Dolphin::set_echo(bool echo) {
	if (echo != 1 && echo != 0) throw invalid_argument("Error: field echo is empty");
	Echolocation = echo;
}

/// вернуть эхолокацию
bool Dolphin::get_echo() {
	return Echolocation;
}

/// Класс Акула
/// Конструктор без параметров
Shark::Shark() {
	classShark = "Tiger";		/// Вид акулы
	painImpulses = 0;			/// Болевые импульсы
	//teeth = 500;
}

/// Конструктор с параметрами
Shark::Shark(const string class1, bool pain) {
	if (pain != 1 && pain != 0) throw invalid_argument("Error: field pain is empty");
	if (class1 == "") throw invalid_argument("Error: field class is empty");
	classShark = class1;
	painImpulses = pain; 

}

/// Деструктор
Shark::~Shark() {}

/// Установить параметры из основного класса
void Shark::set_parametr(const string eat1, double size1, const  string habitat1) {
	if (eat1 == "") throw invalid_argument("Error: field eat is empty");
	if (habitat1 == "") throw invalid_argument("Error: field eat is empty");
	if (size1 != (double)size1) throw invalid_argument("Error: field size is empty");
	if (size1 <= 0) throw invalid_argument("Error: field size <= 0");
	eat = eat1;
	size = size1;
	habitat = habitat1;
}

/// Виртуальный вывод в одну строку
string Shark::toString() {
	return "Shark class - " + classShark + "; " + Aquatic_Inhabitants::toString() + "pain impulses - " + (painImpulses == 1 ? "yes" : "no") + ";\n";
}

/// Установить вид
void Shark::set_class1(const string class1) {
	if (class1 == "") throw invalid_argument("Error: field class is empty");
	classShark = class1;
}

/// Вернуть вид 
string Shark::get_class1()const {
	return classShark;
}

/// Установить болевые импульсы
void Shark::set_pain(bool pain) {
	if (pain != 1 && pain != 0 ) throw invalid_argument("Error: field pain is empty");
	painImpulses = pain;
}

/// Вернуть болевые импульсы
bool Shark::get_pain()const {
	return painImpulses;
}

//void Shark::set_teeth(double teeths) {
//	if (teeths != (double)teeths) throw invalid_argument("Error: field teeth  is empty");
//	if (teeths <= 0) throw invalid_argument("Error: field teeth  <= 0");
//	teeth = teeths;
//}
//
//double Shark::get_teeth() {
//	return teeth;
//}









