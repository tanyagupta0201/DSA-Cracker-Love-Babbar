// https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1

Node *mergeTwoLists(Node *a, Node *b)
{
    Node *temp = new Node(0);
    Node *res = temp;

    while (a != NULL && b != NULL)
    {
        if (a->data < b->data)
        {
            temp->bottom = a;
            temp = temp->bottom;
            a = a->bottom;
        }
        else
        {
            temp->bottom = b;
            temp = temp->bottom;
            b = b->bottom;
        }
    }

    // Merge the remaining Linked List after one Linked List is finished
    if (a)
    {
        temp->bottom = a;
    }
    else
    {
        temp->bottom = b;
    }
    return res->bottom;
}

/* Function which returns the  root of the flattened linked list. */
Node *flatten(Node *root)
{
    if (root == NULL || root->next == NULL)
    {
        return root;
    }

    // recur for list on right
    root->next = flatten(root->next);

    // now merge
    root = mergeTwoLists(root, root->next);

    // return the root
    // it will be in turn merged with its left
    return root;
}