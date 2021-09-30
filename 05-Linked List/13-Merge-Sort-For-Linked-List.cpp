class Solution
{
public:
    //Function to sort the given linked list using Merge Sort.
    void MergeSorting(Node **head)
    {
        // your code here
        Node *curr = *head;
        Node *first;
        Node *second;

        // If there is no node or a single node
        if (!curr or !curr->next)
        {
            return;
        }

        FindMiddle(curr, &first, &second);

        MergeSorting(&first);
        MergeSorting(&second);
        *head = MergeBoth(first, second);
    }

    Node *MergeBoth(Node *first, Node *second)
    {
        Node *answer = NULL;

        if (!first)
            return second;
        else if (!second)
            return first;

        if (first->data <= second->data)
        {
            answer = first;
            answer->next = MergeBoth(first->next, second);
        }
        else
        {
            answer = second;
            answer->next = MergeBoth(first, second->next);
        }
        return answer;
    }

    void FindMiddle(Node *curr, Node **first, Node **second)
    {
        Node *fast;
        Node *slow;
        slow = curr;
        fast = curr->next;

        while (fast != NULL)
        {
            fast = fast->next;

            if (fast != NULL)
            {
                slow = slow->next;
                fast = fast->next;
            }
        }

        *first = curr;
        *second = slow->next;
        slow->next = NULL;
    }

    Node *mergeSort(Node *head)
    {
        MergeSorting(&head);
        return head;
    }
};
