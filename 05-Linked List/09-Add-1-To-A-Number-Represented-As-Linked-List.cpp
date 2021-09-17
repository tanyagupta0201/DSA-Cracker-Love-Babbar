// Add 1 to a number represented as linked list

Node *reverse(Node *head)
{
    Node *next = NULL;
    Node *prev = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

class Solution
{
public:
    Node *addOne(Node *head)
    {
        // Your Code here
        // return head of list after adding one

        // Reverse the Linked List
        head = reverse(head);
        bool f = true;
        Node *curr = head;

        while (curr != NULL and f == true)
        {
            // Case 1
            // If it is the last node and 9 then make it 1 and add 0 to the last
            if (curr->next == NULL and curr->data == 9)
            {
                curr->data = 1;
                Node *temp = new Node(0);
                temp->next = head;
                head = temp;
                curr = curr->next;
            }

            // Case 2
            // When the value is 9, make it zero and move to the next node
            else if (curr->data == 9)
            {
                curr->data = 0;
                curr = curr->next;
            }

            // Case 3
            // When the value is less than 9 simply add 1 to it
            else
            {
                curr->data = curr->data + 1;
                curr = curr->next;
                f = false;
            }
        }

        head = reverse(head);

        return head;
    }
};