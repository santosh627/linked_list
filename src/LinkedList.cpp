#include <iostream>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList()
{
    //ctor
    head = NULL;
    cout << "Linked List constructor is called." << endl;
    cout << "head node is assigned null." << endl;
}

void LinkedList::add (int num)
{
    nd * tmp = new nd;
    nd * tail = new nd;
    tmp->data = num;
    tmp->ptr = NULL;

    tail = head;
    cout << "Adding node" << endl;
    if (head == NULL)
        head = tmp;
    else{
            while (tail->ptr != NULL)
            {
                tail = tail->ptr;
            }

            tail->ptr = tmp;
    }
}

void LinkedList::traverse ()
{
    nd * tmp = new nd;

    tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data;
        if (tmp->ptr != NULL)
            cout << ", ";
        tmp = tmp->ptr;
    }
    cout << "\n";
}
LinkedList::~LinkedList()
{
    //dtor
    cout << "Linked List destructor is called" << endl;
}
