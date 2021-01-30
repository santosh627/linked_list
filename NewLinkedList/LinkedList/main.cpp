#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node * next;
    Node (int num, Node * nd = nullptr): data(num), next(nd) {}
};

class LinkedList
{
public:
    Node * temp, * head;
    LinkedList(): temp(nullptr), head(nullptr)
    {}
    
    void addDataToLL(int num)
    {
        Node * nd = new Node (num);
        if (head == NULL)
        {
            head = nd;
            return;
        }
        
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
            
        temp->next = nd;
        return;
    }

    void addNodeToLL(Node * nd)
    {
        if (head == NULL)
        {
            head = nd;
            return;
        }
        
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
            
        temp->next = nd;
        return;
    }

    void traverse()
    {
        temp = head;
        if (temp == NULL)
        {
            cout << "No Element present in Linked List" << endl;
            return;
        }
        
        while (temp != NULL)
        {
            cout << temp->data << " " ;
            temp = temp->next;
        }
        return;
    }
};  

int main()
{
    LinkedList * ll = new LinkedList();
    ll->addDataToLL(1);
    ll->addDataToLL(2);
    ll->addDataToLL(3);
    ll->addDataToLL(4);
    ll->addDataToLL(5);
    ll->addDataToLL(6);    
    ll->addDataToLL(7);    
    ll->addDataToLL(8);
    ll->addDataToLL(9);
    
    Node * nd = new Node (10);
    ll->addNodeToLL(nd);

    ll->traverse();
    return 0;
    
}
