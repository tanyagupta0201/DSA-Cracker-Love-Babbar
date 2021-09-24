
// Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node *head1, Node *head2)
{
    Node *ptr1 = head1;
    Node *ptr2 = head2;

    // Variables to store the length of both the Linked List
    int c1 = 0, c2 = 0;

    // Find the length of both Linked List
    while (ptr1)
    {
        c1++;
        ptr1 = ptr1->next;
    }

    while (ptr2)
    {
        c2++;
        ptr2 = ptr2->next;
    }

    ptr1 = head1;
    ptr2 = head2;

    // Bring the nodes of both the Linked List to the same level
    int diff = abs(c1 - c2);

    if (c1 > c2)
    {
        for (int i = 0; i < diff; i++)
        {
            ptr1 = ptr1->next;
        }
    }
    else
    {
        for (int i = 0; i < diff; i++)
        {
            ptr2 = ptr2->next;
        }
    }

    // Traverse till common node is found
    while (ptr1 != ptr2)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    // Return if common node is found else return -1
    if (ptr1)
    {
        return ptr1->data;
    }

    return -1;
}
