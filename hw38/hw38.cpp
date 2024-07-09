#include "Application.h"
#include "ApplicationTree.h"

int Application::globalCounter = 0;

int main()
{
	ApplicationTree a;
    int choice;

    do {
        cout << "Menu:\n";
        cout << "1. Add request\n";
        cout << "2. Delete request\n";
        cout << "3. Print requests by destination\n";
        cout << "4. Count requests by date range and destination\n";
        cout << "5. Print all requests\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            a.addApplication();
            break;
        case 2:
            a.deleteApplication();
            break;
        case 3:
            a.printByDestination();
            break;
        case 4:
            a.amountByRange();
            break;
        case 5:
            a.showAll();
            break;
        case 6:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);
}