#pragma once
#include <string>
using namespace std;




class Employee {
	string firstName;
	string lastName;
	int idx;
public:
	 Employee(string firstname,string lastname,int id);

	 void setFirstName(string arg);

	 string getFirstName();

	 void setLastname(string arg);

	 string getLastname();

	 int getId();

	 void setId();

};