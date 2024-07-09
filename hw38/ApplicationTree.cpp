#include "ApplicationTree.h"



void ApplicationTree::addApplication()
{
	string destination, name;
	Date date;

	cout << "Input your name: "; cin >> name;
	cout << "Input destination: "; cin >> destination;
	cin.ignore();
	cout << "Input desired date: "; cin >> date;
	cout << endl;
	applications.insert(Application(destination, name, date));
}

void ApplicationTree::deleteApplication()
{
	int number;
	cout << "Input number: "; cin >> number;
	for (auto item = applications.begin(); item != applications.end(); item++) {
		if (item->getNumber() == number) {
			applications.erase(item);
			cout << "Application deleted\n";
			break;
		}
	}
}

void ApplicationTree::printByDestination() const
{
	string destination;
	cout << "Input destination: "; cin >> destination;
	for (auto item = applications.begin(); item != applications.end(); item++) {
		if (item->getDestination() == destination) {
			item->showInfo();
		}
	}
}

void ApplicationTree::amountByRange() const
{
	Date start, end;
	string destination;
	cout << "Input destination: "; cin >> destination;
	cout << "Input start date: "; cin >> start;
	cout << "Input end date: "; cin >> end;
	int count = 0;
	
	for (auto item = applications.begin(); item != applications.end(); item++) {
		if (start <= item->getDesiredDate() && end >= item->getDesiredDate() && item->getDestination() == destination) {
			count++;
		}
	}
	cout << "Number of flights in range from " << start << " - " << end << " to " << destination << ": " << count << endl;
}

void ApplicationTree::showAll() const
{
	for (auto item : applications) {
		item.showInfo();
		cout << endl;
	}
}
