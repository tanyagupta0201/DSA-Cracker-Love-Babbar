/*
    Time Complexity: O(n)
    Space Complexity: O(1) (As we are only using pointers and no extra data structure)
*/

class Solution
{
public:
    Node *divide(int N, Node *head)
    {
        // for storing even nodes and odd nodes respectively
        Node *even = NULL;
        Node *odd = NULL;

        // for traversing through even and odd nodes respectively
        Node *e = NULL;
        Node *o = NULL;

        while (head)
        {
            if (head->data % 2 == 0)
            {
                if (even == NULL)
                {
                    // first node
                    even = head;
                    e = head;
                }
                else
                {
                    e->next = head;
                    e = e->next;
                }
            }
            else
            {
                if (odd == NULL)
                {
                    // first node
                    odd = head;
                    o = head;
                }
                else
                {
                    o->next = head;
                    o = o->next;
                }
            }
            head = head->next;
        }

        if (e)
        {
            // Since we have to first return even nodes
            e->next = odd;
        }

        if (o)
        {
            o->next = NULL;
        }

        if (even)
        {
            return even;
        }
        else
        {
            // It means there is no even node in the given Linked List
            return odd;
        }
    }
};