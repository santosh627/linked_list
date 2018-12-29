#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct node
{
    int data;
    struct node * ptr;
}nd;

class LinkedList
{
    public:
        LinkedList();
        // To add a node in linked List
        void add (int num);
        // To traverse linked lisr
        void traverse ();

        virtual ~LinkedList();

    protected:

    private:
        nd * head;
};

#endif // LINKEDLIST_H
