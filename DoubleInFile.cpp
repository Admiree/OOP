#include "stdafx.h"
#include "MasDouble.h"

using namespace std;

namespace arrays 
{
	void mas_double::ReadFile(ifstream &ifst) 
	{
		ifst >> razmer;
		mas2 = new int*[razmer];
		for (int i = 0; i < razmer; i++)
		{
			mas2[i] = new int[razmer];
		}

		for (int i = 0; i < razmer; i++)
		{
			for (int j = 0; j < razmer; j++)
			{
				ifst >> mas2[i][j];
			}
		}
	}
	
}