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
	Aquatic_Inhabitants(const string eat1, double size1, const string habitat1);

	/// Деструктор
	~Aquatic_Inhabitants(); 

	/// виртуальный вывод в одну строку
	virtual string toString(); 

	/// Установить длину
	void set_size(double l); 

	/// Вернуть длину
	double get_size() const;

	/// Установить рацион питания
	void set_eat(const string eat1);

	/// Вернуть рацион питания
	string get_eat() const;

	/// Установить место обитания
	void set_habitat(const string habitat1);

	/// Вернуть место обитания
	string get_habitat()const;


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
	Dolphin(const string class1, bool echo);

	/// Деструктор
	~Dolphin(); 

	/// Установить параметры из основного класса
	void set_parametr(const string eat1, double size1, const  string habitat1);

	/// Виртуальный вывод в одну строку
	string toString() override; 

	/// Установить вид
	void set_сlass(const string class1);

	/// Вернуть вид
	string get_сlass() const;

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
	Shark(const string class1, bool pain); 
	
	/// Деструктор
	~Shark();

	/// Установить параметры из основного класса
	void set_parametr(const string eat1, double size1, const string habitat1);
	
	/// Виртуальный вывод в одну строку
	string toString() override; 

	/// Установить вид
	void set_class1(const string class1);

	/// Вернуть вид 
	string get_class1() const;

	/// Установить болевые импульсы
	void set_pain(bool pain);

	/// Вернуть болевые импульсы
	bool get_pain() const;

	/// Установить кол-во зубов
	/*void set_teeth(double teeth);
	* 
	/// Вернуть кол-во зубов
	double get_teeth();*/
};


