#include "stdafx.h"
#include <fstream>
#include <iostream>
#include "list.h"
#include <string>
#include "windows.h"

using namespace std;
using namespace arrays;

int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream in(argv[1]);
	ofstream out(argv[2]);

	list list;
	list.In(in);

	//out << "���� �������� " << endl << endl;
	//list.Out(out);
	//out << endl << endl;

	string enter;

	cout << "�����:\n 1 - ������ ���������� ������\n 2 - ������ ��������� ������\n 0 - ��� ��������" << endl;
	cin >> enter;
	if (enter == "1")
		cout << "�� ������� ������ ���������� ������" << endl << endl;
	if (enter == "2")
		cout << "�� ������� ������ ��������� ������ \n";

	list.Out1(out, enter);

	out << endl << endl;

	list.Clear();
	list.Out(out);

	cout << "Stop" << endl;

	in.close();
	out.close();

	return 0;
}

