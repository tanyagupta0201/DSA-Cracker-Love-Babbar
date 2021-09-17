class Solution
{
public:
    Node *reverse(Node *head)
    {
        Node *curr = head;
        Node *next = NULL;
        Node *prev = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    //Function to add two numbers represented by linked list.
    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {
        // code here
        int sum = 0, carry = 0;

        // Reverse both the Linked List
        first = reverse(first);
        second = reverse(second);

        Node *temp;
        Node *res = NULL;
        Node *curr = NULL;

        while (first != NULL or second != NULL)
        {
            sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
            carry = (sum > 9) ? 1 : 0;
            sum = sum % 10;
            temp = new Node(sum);

            // Check if it is a first node or not
            if (res == NULL)
                res = temp;
            else
                curr->next = temp;

            curr = temp;

            if (first)
            {
                first = first->next;
            }

            if (second)
            {
                second = second->next;
            }
        }

        if (carry > 0)
        {
            temp = new Node(carry);
            curr->next = temp;
            curr = temp;
        }

        res = reverse(res);
        return res;
    }
};
