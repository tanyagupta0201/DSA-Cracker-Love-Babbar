
class Solution
{
public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        // Your code here
        Node *slow = head;
        Node *fast = head;

        // Find the mid point
        while (fast != NULL and fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        Node *prev = NULL;
        Node *next;
        Node *curr = slow;

        // Reverse the linked list from the mid point till the end
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        fast = head;

        while (prev != NULL)
        {
            if (fast->data != prev->data)
            {
                return false;
            }

            fast = fast->next;
            prev = prev->next;
        }
        return true;
    }
};