#include "Application.h"


Application::Application()
{
    globalCounter++;
    number = globalCounter;
    destination = "undefined";
    name = "undefined";
    desiredDate = Date();
}

Application::Application(string destination, string name, Date desiredDate)
{
    globalCounter++;
    number = globalCounter;
    this->destination = destination;
    this->name = name;
    this->desiredDate = desiredDate;
}

void Application::setDestination(string destination)
{
    this->destination = destination;
}

void Application::setName(string name)
{
    this->name = name;
}

void Application::setDesiredDate(Date desiredDate)
{
    this->desiredDate = desiredDate;
}

int Application::getNumber() const
{
    return number;
}

string Application::getDestination() const
{
    return destination;
}

string Application::getName() const
{
    return name;
}

Date Application::getDesiredDate() const
{
    return desiredDate;
}

void Application::showInfo() const
{
    cout << "\nNumber: " << number << endl;
    cout << "Destination: " << destination << endl;
    cout << "Name: " << name << endl;
    cout << "Desired date: " << desiredDate << endl;
}

bool Application::operator<(const Application& obj) const&
{
    if (this->destination[0] < obj.destination[0]) {
        return true;
    }
    else if (this->destination[0] == obj.destination[0] && this->desiredDate < obj.desiredDate) {
        return true;
    }
    return false;
}
