#include "developer.h"
#include<iostream>

Dev::Dev(string firstname,string lastname,int id):Employee(firstname,lastname,id)
{};

void Dev::setLanguage(string lang) {
	this->programminLang = lang;
}

string Dev::getLanguage() {
	return this->programminLang;
}

void Dev::implementDSA() {
	cout << "i can implement DSA" << endl;
}
	