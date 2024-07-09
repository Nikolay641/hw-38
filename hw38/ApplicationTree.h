#pragma once
#include <set>
#include "Application.h"

class ApplicationTree
{
	set<Application> applications;
public:
	void addApplication();
	void deleteApplication();
	void printByDestination()const;
	void amountByRange()const;
	void showAll()const;
};

