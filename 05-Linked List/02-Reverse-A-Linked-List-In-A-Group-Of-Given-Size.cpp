
class Solution
{
public:
    struct node *reverse(struct node *head, int k)
    {
        node *N;
        node *prev = NULL;
        node *curr = head;
        int c = 0;

        while (curr != NULL and c < k)
        {
            N = curr->next;
            curr->next = prev;
            prev = curr;
            curr = N;
            c++;
        }

        if (N != NULL)
        {
            head->next = reverse(N, k);
        }
        return prev;
    }
};
