#include "stdafx.h"
#include "MasDouble.h"
#include "def.h"

using namespace std;

namespace arrays
{
	void masDouble::WriteFile(ofstream &ofst)
	{
		string pro[3] = { "���������", "�� ��������", "���������� ������" };
		CheckOutputFile(ofst);
		ofst << pro[p].c_str() << "\n";
		ofst << "It is Double Matrix: razmernost = " << razmer << endl;
		ofst << "Matrix : " << endl;
		ofst << "����� ��������� = " << CalculationSum() << endl;

		for (int i = 0; i < razmer; i++)
		{
			for (int j = 0; j < razmer; j++)
			{
				ofst << mas2[i][j] << "\t";
			}
			ofst << endl;
		}
	}
}
