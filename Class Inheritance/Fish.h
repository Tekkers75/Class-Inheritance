/// @author Саранчин К.А.
/// Заголовочный файл класса Date
#pragma once
#include <iostream>


using namespace std;

/// Класс водные обитатели
class Aquatic_Inhabitants		
{
protected:
	string eat;			/// Чем питаются 
	double size;		/// Размер
	string habitat;		/// Cреда обитания


public:
	/// Конструктор без параметров
	Aquatic_Inhabitants(); 

	/// Конструктор с параметрами
	Aquatic_Inhabitants(string eat1, double size1, string habitat1); 

	/// Деструктор
	~Aquatic_Inhabitants(); 

	/// виртуальный вывод в одну строку
	virtual string toString(); 

	/// Установить длину
	void set_size(double l); 

	/// Вернуть длину
	double get_size(); 

	/// Установить рацион питания
	void set_eat(string eat1); 

	/// Вернуть рацион питания
	string get_eat(); 

	/// Установить место обитания
	void set_habitat(string habitat1);

	/// Вернуть место обитания
	string get_habitat();


};

/// Класс дельфин
class Dolphin: public Aquatic_Inhabitants
{
private: 
	string classDolphin;	/// Вид дельфина
	bool Echolocation;		/// Эхолокация
public:
	/// Конструктор без параметров
	Dolphin(); 

	/// Конструктор с параметрами
	Dolphin(string class1, bool echo); 

	/// Деструктор
	~Dolphin(); 

	/// Установить параметры из основного класса
	void set_parametr(string eat1, double size1, string habitat1);

	/// Виртуальный вывод в одну строку
	string toString() override; 

	/// Установить вид
	void set_сlass(string class1); 

	/// Вернуть вид
	string get_сlass(); 

	/// Установить эхолокацию
	void set_echo(bool echo); 

	/// вернуть эхолокацию
	bool get_echo(); 

};

/// Класс акула
class Shark : public Aquatic_Inhabitants
{
protected:
	string classShark;			/// Вид акулы
	bool painImpulses;			/// Болевые импульсы
	/*double teeth;				/// Кол-во зубов*/

public:

	/// Конструктор без параметров
	Shark();

	/// Конструктор с параметрами
	Shark(string class1, bool pain); 
	
	/// Деструктор
	~Shark();

	/// Установить параметры из основного класса
	void set_parametr(string eat1, double size1, string habitat1);
	
	/// Виртуальный вывод в одну строку
	string toString() override; 

	/// Установить вид
	void set_class1(string class1);

	/// Вернуть вид 
	string get_class1();

	/// Установить болевые импульсы
	void set_pain(bool pain);

	/// Вернуть болевые импульсы
	bool get_pain();

	/// Установить кол-во зубов
	/*void set_teeth(double teeth);
	* 
	/// Вернуть кол-во зубов
	double get_teeth();*/
};


