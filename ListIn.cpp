#include "stdafx.h"
#include "list.h"

using namespace std;

namespace arrays
{
	void container::In(ifstream &ifst)
	{
		while (!ifst.eof())
		{
			listElement *temp = new listElement;
			temp->array = array::InfaArrayPrint(ifst);
			temp->next = listHead;
			listHead = temp;
			listLength++;
		}
		//listLength--;
	}
}