// myCPlusProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
#include "developer.h"
using namespace std;


int main()
{
	
	Dev dev = Dev("Nnaemeka","Asiwe",26);
	dev.setLanguage(" Java");

	cout << dev.getLanguage() << endl;
	return 0;
}


