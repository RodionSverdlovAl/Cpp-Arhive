#include <string.h>
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>

#pragma warning(disable : 4996)

using namespace std;

class Man 
{
public:
	char Name[50];
	char Surname[50];
	char Patronymic[50];
	int Year;
	void changeName();
	void changeSurname();
	void changePatronymic();
	void changeYear(int manYear);
};

void Man::changeName()
{
	char n[50];
	cout << "Input name: \n";
	cin >> n;
	memset(Name, ' ', strlen(Name) + 1);
	strcpy(Name, n);
}

//void show()
//{
//	cout << "\nName: " << Name;
//	cout << "\nSurame: " << Surname;
//	cout << "\nPatronymic: " << Patronymic;
//	cout << "\nYear: " << Year;
//
//}

void Man::changeSurname()
{
	char s[50];
	cout << "Input surname: \n";
	cin >> s;
	memset(Surname, ' ', strlen(Surname) + 1);
	strcpy(Surname, s);

}

void Man::changePatronymic()
{
	char p[50];
	cout << "Input patronymic: \n";
	cin >> p;
	memset(Patronymic, ' ', strlen(Patronymic) + 1);
	strcpy(Patronymic, p);
}

void Man::changeYear(int manYear)
{
	cout << "Input year: \n";
	cin >> Year;
}

//---------------------------------------

class Tax_payment : public Businessman
{
	int sum;
	char date[50];
};

class Businessman : public Man
{
	int	license_number;
	char registration_address[50];
	char taxpayer_identification_number[50];
	char scientific_works[30][50];

public:
	Businessman(char *n, char *s, char *p, int Year);
	
	//void show();
};

//Businessman::Businessman(char *n, char *s, char *p, int Year)
//{
//	strcpy(Name, n);
//	strcpy(Surname, s);
//	strcpy(Patronymic, p);
//	year = Year;
//}

//void  Businessman::changeYear()
//{
//	cout << "Input year: \n";
//	cin >> year;
//}

//-------------------------------------------

class Trips : public Tourist
{
	char country[50];
	string date[50];
};

class Tourist : public Man
{
	char passport_data[50];
	char scientific_works[30][50];
public:
	Tourist(char *n, char *s, char *p, int Year);
	
	//void show();
};

//Tourist::Tourist(char *n, char *s, char *p, int Year)
//{
//	strcpy(Name, n);
//	strcpy(Surname, s);
//	strcpy(Patronymic, p);
//	year = Year;
//}

//-----------------------------------------

class Shuttle : public Businessman, public Tourist
{
	char adress[30][50];
};

//-----------------------------------------


int main()
{
	{
		setlocale(LC_ALL, "Russian");
		

		system("pause");
		return 0;

	}
}