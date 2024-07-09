#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Application
{
	static int globalCounter;
	int number;
	string destination;
	string name;
	Date desiredDate;
public:
	Application();
	Application(string destination, string name, Date desiredDate);

	void setDestination(string destination);
	void setName(string name);
	void setDesiredDate(Date desiredDate);

	int getNumber()const;
	string getDestination()const;
	string getName()const;
	Date getDesiredDate()const;

	void showInfo()const;
	bool operator<(const Application& obj)const&;
};

