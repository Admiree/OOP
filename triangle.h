#include "stdafx.h"
#ifndef _triangle
#define _triangle
#include <fstream>
#include "array.h"

namespace arrays
{
	class masTriangle : public array
	{
	public:
		//int razmer;
		int **mas3;

	public:
		void ReadFile(ifstream &ifst);
		void WriteFile(ofstream &ofst);
		int CalculationSum();

		//int SumOperation(mas_triangle &mas_triangle);
		masTriangle() {}
	};
}

#endif