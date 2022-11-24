#pragma once
#include <iostream>


using namespace std;


class Aquatic_Inhabitants		/// ������ ���������
{
protected:
	string eat;			/// ��� �������� 
	double size;		/// ������
	string habitat;		/// C���� ��������


public:
	
	Aquatic_Inhabitants(); /// ����������� ��� ����������

	Aquatic_Inhabitants(string eat1, double size1, string habitat1); /// ����������� � �����������

	~Aquatic_Inhabitants(); /// ����������

	virtual string toString(); /// ����� � ���� ������

	void set_size(double l); /// ���������� ������

	double get_size(); /// ������� �����

	void set_eat(string eat1); /// ���������� ������ �������

	string get_eat(); /// ������� ������ �������

	void set_habitat(string habitat1);

	string get_habitat();


};

/// ����� �������
class Dolphin: public Aquatic_Inhabitants
{
private: 
	string classDolphin;		/// ��� ��������
	string Echolocation;		/// ����������
public:
	Dolphin(); //����������� ��� ����������

	Dolphin(string class1, string echo); /// ����������� � �����������

	~Dolphin(); /// ����������

	void set_parametr(string eat1, double size1, string habitat1);

	string toString() override; /// ����� � ���� ������

	void set_�lass(string class1); /// ���������� ���

	string get_�lass(); /// ������� ���

	void set_echo(string echo); /// ���������� ����������

	string get_echo(); /// ������� ����������

};

/// ����� �����
class Shark : public Aquatic_Inhabitants
{
protected:
	string classShark;			/// ��� �����
	string painImpulses;		/// ������� ��������
	double teeth;				/// ���-�� �����

public:

	Shark();

	Shark(string class1, string pain); 

	~Shark();

	void set_parametr(string eat1, double size1);
	
	string toString() override; /// ����� � ���� ������

	void set_class1(string class1);

	string get_class1();

	void set_pain(string pain);

	string get_pain();

	void set_teeth(double teeth);

	double get_teeth();
};


