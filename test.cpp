#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertAthead(node *&head, int data)
{
    node *n = new node(data);
    n->next = head;
    head = n;
}

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;
}

void removeDuplicate(node *&head)
{
    node *current = head;
    node *next_next;
    if (head == NULL)
    {
        return;
    }
    while (current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            next_next = current->next->next;
            free(current->next);
            current->next = next_next;
        }
        else
        {
            current = current->next;
        }
    }
    void removeDuplicate(node * &head)
    {
        node *current = head;
        node *next_next;
        if (head == NULL)
        {
            return;
        }
        while (current->next != NULL)
        {
            if (current->data == current->next->data)
            {
                next_next = current->next->next;
                free(current->next);
                current->next = next_next;
            }
            else
            {
                current = current->next;
            }
        }
    }

    void insertAtTail(node * &head, int data)
    {
        if (head == NULL)
        {
            head = new node(data);
            return;
        }
        node *tail = head;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
        tail->next = new node(data);
        return;
    }

    void insertAtMiddle(node * &head, int data, int key)
    {
        if (head == NULL)
        {
            head = new node(data);
            return;
        }
        node *temp = head;
        while (temp->next->data != key)
        {
            temp = temp->next;
        }
        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }

    void deletingAtHead(node * &head)
    {
        if (head == NULL)
        {
            return;
        }
        node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    void deletingAtTail(node * &head)
    {
        if (head == NULL)
        {
            return;
        }
        node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        node *todelete = temp->next;
        temp->next = NULL;
        delete todelete;
        return;
    }

    bool hasCycle(node * head)
    {
        node *slow = head;
        node *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
            {
                return true;
            }
        }
        return false;
    }

    void deletingAtMiddle(node * &head, int key)
    {
        node *temp = head;
        while (temp->next->data != key)
        {
            temp = temp->next;
        }
        node *todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
        return;
    }
    int main()
    {

        node *head = NULL;
        insertAtTail(head, 5);
        insertAtTail(head, 6);
        insertAtTail(head, 7);
        insertAtTail(head, 8);
        insertAtMiddle(head, 9, 7);
        deletingAtHead(head);
        deletingAtTail(head);
        deletingAtMiddle(head, 7);
        display(head);
        return 0;
    }