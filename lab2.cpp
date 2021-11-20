#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>

#define cls system("cls");
#define suc cout << "\nОперация выполнена успешно!"; _getch()
#define max 1000

using namespace std;

void menu();
void coutcars();
//void pluscar();
//void autopark();
//void delcar();
void changename();

string cars[max];
int c = 1;

class autopark
{
public:
	void zagolovok() {
		cout << " Auto Park\n";
	}

};
class adddel
{private:
	int d;

public:
	void delcar() {
	int m = d;
		cout << "Введите порядковый номер машины для удаления (0 - для отмены операции): ";

		cin >> m;


		if (m > c || m < 0) { cout << "\nНекорректные данные! Повторите операцию."; _getch(); }
		else if (m == 0) { cout << "\nОперация отменена."; _getch(); }
		else {
			for (int i = d; i < c; i++) {
			}
			c--;
			suc;
		}
	};
	void pluscar() {
		cars[c - 1] = "Новая машина"; suc;
	}



};


void main() {
	setlocale(0, "");
	menu();
	//autopark adas;
	//adas.zagolovok();
	cout << "Branchj Vadim" << endl;
	cout << "hello" << endl;
	cout << "Hello Rorld" << endl;
}

void menu() {

	cls;
	autopark adas ;
	adas.zagolovok();

	cout << "\n\n\n\nВыберите действие: \n1. Загнать новую машину\n2. Удалить машину\n3. Посмотреть список машин\n4. Переименовать машину\n0. Выход из автопарка\n\n";
	switch (_getch()) {
	case '1':
		adddel add;
		add.pluscar();
		if (c == max) { 
			cout<< "Место в автопарке закончилось!"; _getch(); 
			
			break; 
		}
		else { c++; add; break; }


	case '2':
		adddel cock;
		cock.delcar();
		if (c == 0) { cout<< "У вас нет машин!"; _getch(); break; }
		else {cock; break; }

	case '3': {coutcars(); 
		break; 
	}


	case '4': {
		changename(); 
		break; 
	}

	case '0': exit(0);
	default: cout << "Неверная команда!"; _getch();
	}
	menu();
}

void coutcars() {
	void SetColor(int, int);


	cout << "\nВаши машины:\n\n";

	if (!c) cout <<"\nУ вас нет машин!";
	else for (
		int i = 0; i < c; i++)
	{		cout << i + 1 << ". ";
			cout << cars[i] << "\n";
		}
	cout << "\nМеста осталось:" << max - c;
	_getch();
}

/*void pluscar() { 
	cars[c - 1] = "Новая машина"; suc; 
}/*/

void changename() {
	int ch; string s;
	cout << "Введите порядковый номер машины для смены имени (0 - для отмены операции): ";
	cin >> ch;

	getline(cin, s);


	if (ch > c || ch < 0) { cout << "\nНекорректные данные! Повторите операцию."; _getch(); }

	// Отмена операции
	else if (ch == 0) { cout << "\nОперация отменена."; _getch(); }

	// Смена имени
	else {
		cout << "Введите желаемое имя: ";

		// Считываем строку, включая пробелы
		getline(cin, cars[ch - 1]);
		suc;
	}
}

/*void delcar() {
	int d;
	cout << "Введите порядковый номер машины для удаления (0 - для отмены операции): ";

	cin >> d;


	if (d > c || d < 0) { cout << "\nНекорректные данные! Повторите операцию."; _getch(); }
	else if (d == 0) { cout << "\nОперация отменена."; _getch(); }
	else {
		for (int i = d; i < c; i++) {
		}
		c--;
		suc;
	}
}/*/


/*class autopark
{
public:
	void zagolovok() {
		cout << " Auto Park\n";
	}

};/*/