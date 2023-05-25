#pragma once
#include "Employee.h"



class Dev: public Employee{
private:string programminLang;
public:
	Dev(string firstname,string lastname,int id);
	
	virtual void setLanguage(string arg);
	virtual string getLanguage();
	virtual void implementDSA();

};