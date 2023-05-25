#include "Employee.h"



  Employee::Employee(string firstname, string lastname, int id) {
	  this->firstName = firstname;
	  this->lastName = lastName;
	  this->idx = id;
};
 void Employee::setFirstName(string name){
	 this->firstName = name;
 }

 string Employee::getFirstName() {
	 return this->firstName;
 }

 string Employee::getLastname() {
	 return this->lastName;
 }

 void Employee::setLastname(string name) {
	 this->lastName = name;
 }
