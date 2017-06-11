#define endll endl << endl

#include <iostream>
#include <fstream>

using std::ifstream;
using std::endl;
using std::cout;
using std::cin;

void show(char*);
void error(char*);

int menu(char* menu, char* input) {
	unsigned short userInput = 0;
	if (input == "cin") {
		show(menu);
		cin >> userInput;
	} else if (input == "file") {
		ifstream file("input.txt");
		if (!file) {
			error("������ \"input.txt\" �� ����������, ���� �������� ��");
			return -1;
		} else {
			show(menu);
			file >> userInput;
		}
	}
	cout << endl;
	return userInput;
}

void show(char* menu) {
	if (menu == "main")
		cout << endl << " ����, �������� ��� ����������� �����:" << endl
		<< " -------------------------------------" << endl
		<< " 1 - �����" << endl
		<< " 2 - ������" << endl
		<< " 3 - �����" << endl
		<< " 4 - �������" << endl
		<< " 5 - ����������" << endl
		<< " 6 - ���������� �� ���������" << endl
		<< " 7 - ��������� �� ���� � ��������" << endl
		<< " 0 - �����" << endll
		<< " ������ �����: ";
	else if (menu == "line")
		cout << " ����, �������� �������� �� ������:" << endl
		<< " ----------------------------------" << endl
		<< " 1 - �������� �� ������ �� �����" << endl
		<< " 2 - �������� �� �������� ������ �� �����" << endl
		<< " 3 - �������� �� ���� ����� ��� �����" << endl
		<< " 4 - �������� ���� ������ ����� ���� �� ������ �����" << endl
		<< " 5 - �������� ���� ������ ����� � ��������� �� ����� �����" << endl
		<< " 6 - �������� ���� ������ ����� ������� � ����� �����" << endl
		<< " 7 - �������� ���� ������ ����� ������� ����� �����" << endl
		<< " 8 - �������� ���� ������ ����� � ���������� � ����� �����" << endl
		<< " 9 - �������� ���� ������ ����� � ��������������� �� ����� �����" << endl
		<< " 0 - �����" << endll
		<< " ������ �����: ";
	else if (menu == "point")
		cout << " ����, �������� �������� �� ������:" << endl
		<< " ----------------------------------" << endl
		<< " 1 - �������� ���� ������ ����� ������� � ����� �����" << endl
		<< " 0 - �����" << endll
		<< " ������ �����: ";
	else if (menu == "vector")
		cout << " ����, �������� �������� �� ������:" << endl
		<< " ----------------------------------" << endl
		<< " 1 - ����������� �� ������� �� ������" << endl
		<< " 2 - ����������� �� ������ �� ������" << endl
		<< " 3 - �������� �� ������ ����� ���� ������" << endl
		<< " 4 - �������� �� ����� ������" << endl
		<< " 5 - �������� �� ����������� �� ��� �������" << endl
		<< " 6 - �������� �� ����������������� �� ��� �������" << endl
		<< " 7 - �������� �� ��� �������" << endl
		<< " 8 - ������� �� ��� �������" << endl
		<< " 9 - ��������� �� ������ � ������ �����" << endl
		<< " 10 - �������� ������������ �� ��� �������" << endl
		<< " 11 - �������� ������������ �� ��� �������" << endl
		<< " 12 - ������� ������������ �� ��� �������" << endl
		<< " 0 - �����" << endll
		<< " ������ �����: ";
	else if (menu == "segment")
		cout << " ����, �������� �������� �� ������:" << endl
		<< " ----------------------------------" << endl
		<< " 1 - �������� �� ������� �� �������" << endl
		<< " 2 - �������� �� ����� �� �������" << endl
		<< " 3 - �������� ���� ������ ����� ���� �� ������ �������" << endl
		<< " 0 - �����" << endll
		<< " ������ �����: ";
	else if (menu == "triangle")
		cout << " ����, �������� �������� �� ������:" << endl
		<< " ----------------------------------" << endl
		<< " 1 - ���������� �� ���� �� ����� ����������" << endl
		<< " 2 - �������� �� ������ �� ����� ����������" << endl
		<< " 3 - �������� �� ���������� �� ����� ����������" << endl
		<< " 4 - �������� �� ����������� �� ����� ����������" << endl
		<< " 0 - �����" << endll
		<< " ������ �����: ";
	else
		error("������� �� � ���������");
}
