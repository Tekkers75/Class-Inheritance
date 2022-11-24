/// @author Саранчин К.А.
/// Заголовчный файл класса Date
#pragma once
#include <iostream>


using namespace std;


class Aquatic_Inhabitants		/// Водные обитатели
{
protected:
	string eat;			/// Чем питаются 
	double size;		/// Размер
	string habitat;		/// Cреда обитания


public:
	
	Aquatic_Inhabitants(); /// Конструктор без параметров

	Aquatic_Inhabitants(string eat1, double size1, string habitat1); /// Конструктор с параметрами

	~Aquatic_Inhabitants(); /// Деструктор

	virtual string toString(); /// Вывод в одну строку

	void set_size(double l); /// Установить размер

	double get_size(); /// Вернуть длину

	void set_eat(string eat1); /// Установить рацион питания

	string get_eat(); /// Вернуть рацион питания

	void set_habitat(string habitat1);

	string get_habitat();


};

/// Класс дельфин
class Dolphin: public Aquatic_Inhabitants
{
private: 
	string classDolphin;		/// Вид дельфина
	string Echolocation;		/// Эхолокация
public:
	Dolphin(); //Конструктор без параметров

	Dolphin(string class1, string echo); /// Конструктор с параметрами

	~Dolphin(); /// Деструктор

	void set_parametr(string eat1, double size1, string habitat1);

	string toString() override; /// Вывод в одну строку

	void set_сlass(string class1); /// Установить вид

	string get_сlass(); /// Вернуть вид

	void set_echo(string echo); /// Установить эхолокацию

	string get_echo(); /// вернуть эхолокацию

};

/// Класс акула
class Shark : public Aquatic_Inhabitants
{
protected:
	string classShark;			/// Вид акулы
	string painImpulses;		/// Болевые импульсы
	double teeth;				/// Кол-во зубов

public:

	Shark();

	Shark(string class1, string pain); 

	~Shark();

	void set_parametr(string eat1, double size1);
	
	string toString() override; /// Вывод в одну строку

	void set_class1(string class1);

	string get_class1();

	void set_pain(string pain);

	string get_pain();

	void set_teeth(double teeth);

	double get_teeth();
};


