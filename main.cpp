#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    int option, num;
    char reply;
    LinkedList ll;
    cout << "Welcome in Linked List Program" << endl;
    cout << "This is main function" << endl;
    do{
        cout << "Please choose from the options:" << endl;
        cout << "1. Insert a node." << endl;
        cout << "2. Traverse Linked List" << endl;
        cout << "Please enter your choice: " << endl;
        cin >> option;

        switch (option)
        {
            case 1: cout << "Insertion of node began" << endl;
                    cout << "Please enter the data: " << endl;
                    cin >> num;
                    ll.add (num);
                    break;

            case 2: ll.traverse();
                    break;

            default: cout << "Wrong choice... Please enter the correct option..." << endl;
        }
        cout << "Do you want to continue?" << endl;
        cout << "Please press y or Y to continue:" << endl;
        cin >> reply;
    }while (reply == 'y' || reply == 'Y');
    return 0;
}
