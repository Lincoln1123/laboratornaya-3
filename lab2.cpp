#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>

#define cls system("cls");
#define suc cout << "\n�������� ��������� �������!"; _getch()
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
		cout << "������� ���������� ����� ������ ��� �������� (0 - ��� ������ ��������): ";

		cin >> m;


		if (m > c || m < 0) { cout << "\n������������ ������! ��������� ��������."; _getch(); }
		else if (m == 0) { cout << "\n�������� ��������."; _getch(); }
		else {
			for (int i = d; i < c; i++) {
			}
			c--;
			suc;
		}
	};
	void pluscar() {
		cars[c - 1] = "����� ������"; suc;
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

	cout << "\n\n\n\n�������� ��������: \n1. ������� ����� ������\n2. ������� ������\n3. ���������� ������ �����\n4. ������������� ������\n0. ����� �� ���������\n\n";
	switch (_getch()) {
	case '1':
		adddel add;
		add.pluscar();
		if (c == max) { 
			cout<< "����� � ��������� �����������!"; _getch(); 
			
			break; 
		}
		else { c++; add; break; }


	case '2':
		adddel cock;
		cock.delcar();
		if (c == 0) { cout<< "� ��� ��� �����!"; _getch(); break; }
		else {cock; break; }

	case '3': {coutcars(); 
		break; 
	}


	case '4': {
		changename(); 
		break; 
	}

	case '0': exit(0);
	default: cout << "�������� �������!"; _getch();
	}
	menu();
}

void coutcars() {
	void SetColor(int, int);


	cout << "\n���� ������:\n\n";

	if (!c) cout <<"\n� ��� ��� �����!";
	else for (
		int i = 0; i < c; i++)
	{		cout << i + 1 << ". ";
			cout << cars[i] << "\n";
		}
	cout << "\n����� ��������:" << max - c;
	_getch();
}

/*void pluscar() { 
	cars[c - 1] = "����� ������"; suc; 
}/*/

void changename() {
	int ch; string s;
	cout << "������� ���������� ����� ������ ��� ����� ����� (0 - ��� ������ ��������): ";
	cin >> ch;

	getline(cin, s);


	if (ch > c || ch < 0) { cout << "\n������������ ������! ��������� ��������."; _getch(); }

	// ������ ��������
	else if (ch == 0) { cout << "\n�������� ��������."; _getch(); }

	// ����� �����
	else {
		cout << "������� �������� ���: ";

		// ��������� ������, ������� �������
		getline(cin, cars[ch - 1]);
		suc;
	}
}

/*void delcar() {
	int d;
	cout << "������� ���������� ����� ������ ��� �������� (0 - ��� ������ ��������): ";

	cin >> d;


	if (d > c || d < 0) { cout << "\n������������ ������! ��������� ��������."; _getch(); }
	else if (d == 0) { cout << "\n�������� ��������."; _getch(); }
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