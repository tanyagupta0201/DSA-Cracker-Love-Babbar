// function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.

void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    Node *slow = head;
    Node *fast = head->next;

    while (fast != head and fast->next != head)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    *head1_ref = head;
    *head2_ref = slow->next;

    // 1st Linked List ready
    slow->next = *head1_ref;

    Node *curr = *head2_ref;
    while (curr->next != head)
    {
        curr = curr->next;
    }

    // 2nd Linked List ready
    curr->next = *head2_ref;
}