#pragma once
using namespace std;
#include <string>;
class iDev {
protected:
	 string programminLang;
	 virtual void setLanguage(bool arg) = 0;
	virtual string getLanguage() = 0;
	virtual void implementDSA() = 0;
	
};