//Function to remove duplicates from sorted linked list.

Node *removeDuplicates(Node *root)
{
    // your code goes here
    Node *head = root;

    if (head == NULL)
    {
        return NULL;
    }

    while (head->next != NULL)
    {
        if (head->data == head->next->data)
        {
            head->next = head->next->next;
        }
        else
        {
            // head is only incremented when the next element is not same as the head
            head = head->next;
        }
    }
    return root;
};