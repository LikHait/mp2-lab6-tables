#include "TabRecordWithState.h"
#include <iostream>


int main()
{
	Date gin = 30;
	string name = "name";
	TabRecordWithState tab(name, &gin, 4);
	cout << "state: " << tab.GetState() << "; key: " << tab.GetKey() << endl;
	return 0;
}