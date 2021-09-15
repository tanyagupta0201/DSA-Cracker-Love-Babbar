
class Solution
{
public:
    struct node *reverse(struct node *head, int k)
    {
        node *next;
        node *prev = NULL;
        node *curr = head;
        int c = 0;

        while (curr != NULL and c < k)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            c++;
        }

        if (next != NULL)
        {
            head->next = reverse(next, k);
        }
        return prev;
    }
};