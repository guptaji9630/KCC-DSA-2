#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    int data;
    node *next;
};

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;
}

void removedublicate(node *head)
{
    node *curr = head;
    node *next = NULL;
    while (curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            next = curr->next->next;
            delete (curr->next);
            curr->next = next;
        }
        else
        {
            curr = curr->next;
        }
    }

    // function to Inserting a Node Into a Sorted Doubly Linked List
}
int main()
{
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;
    node *fourth = NULL;
    node *fifth = NULL;
    node *sixth = NULL;
    node *seventh = NULL;

    head = new node();
    second = new node();

    third = new node();
    fourth = new node();
    fifth = new node();
    sixth = new node();
    seventh = new node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 3;

    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = sixth;

    sixth->data = 5;
    sixth->next = seventh;

    seventh->data = 7;
    seventh->next = NULL;

    display(head);

    removedublicate(head);
    display(head);

    return 0;
}