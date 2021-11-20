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

node *FindNode(node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    node *fast = head;
    node *slow = head;

    // Boolean to check if there a loop exists in the given Linked List.
    int flag = 0;

    while (fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        slow = head;

        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
    return NULL;
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

    // Create a loop for testing
    head->next->next->next->next->next = head->next->next;

    node *result = FindNode(head);
    if (result == NULL)
    {
        cout << "Loop does not exist !!";
    }
    else
    {
        cout << "Starting point of node is " << result->data;
    }

    return 0;
}
