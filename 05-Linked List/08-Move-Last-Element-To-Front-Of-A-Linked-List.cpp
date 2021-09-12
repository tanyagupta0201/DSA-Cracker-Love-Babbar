#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // Constructor
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void print(node *head)
{
    if (head == NULL)
    {
        cout << "The list is empty !!" << endl;
    }

    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
    cout << endl;
}

void Insert_At_Tail(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new node(data);
    return;
}

void moveLastToFront(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }

    node *last = head;
    node *seclast = NULL;

    // Find the second last element
    while (last->next != NULL)
    {
        seclast = last;
        last = last->next;
    }

    // Set the next of second last as NULL
    seclast->next = NULL;

    // Set next of last as head node
    last->next = head;

    // Change the head pointer to point to last node now
    head = last;
}

int main()
{
    node *head = NULL;
    int n, data;

    cout << "Enter the number of nodes you want to create: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data: ";
        cin >> data;
        Insert_At_Tail(head, data);
    }
    cout << "Linked List: ";
    print(head);

    moveLastToFront(head);
    cout << "New Linked List: ";
    print(head);

    return 0;
}