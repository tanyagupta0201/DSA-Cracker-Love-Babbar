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

// Iterative Way
void Reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *N;

    while (curr != NULL)
    {
        // Save the next node
        N = curr->next;
        // Make the curr node point to prev
        curr->next = prev;
        // Update prev and curr and take 1 step forward
        prev = curr;
        curr = N;
    }
    head = prev;
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

    Reverse(head);
    cout << "Reversed Linked List: ";
    print(head);

    return 0;
}