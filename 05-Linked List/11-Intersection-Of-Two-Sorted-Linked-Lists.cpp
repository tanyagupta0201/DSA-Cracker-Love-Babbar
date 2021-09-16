
Node *findIntersection(Node *head1, Node *head2)
{
    // Your Code Here
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    Node *head = NULL;
    Node *curr = NULL;

    while (ptr1 and ptr2)
    {
        if (ptr1->data == ptr2->data)
        {
            /* When the new linked list is empty, create a new node and store it in the head else store it in curr->next */
            if (head == NULL)
            {
                Node *t = new Node(ptr1->data);
                head = t;
                curr = t;
            }
            else
            {
                Node *t = new Node(ptr1->data);
                curr->next = t;
                curr = curr->next;
            }

            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        else
        {
            if (ptr1->data < ptr2->data)
            {
                ptr1 = ptr1->next;
            }
            else
            {
                ptr2 = ptr2->next;
            }
        }
    }
    return head;
}