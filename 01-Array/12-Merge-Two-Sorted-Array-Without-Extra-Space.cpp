class Solution
{
public:
    void merge(int arr1[], int arr2[], int n, int m)
    {
        // Create a new array dynamically
        int *a = new int[n + m];

        int i = 0, j = 0, k = 0;

        while (i < n && j < m)
        {
            if (arr1[i] < arr2[j])
            {
                a[k] = arr1[i];
                k++;
                i++;
            }
            else
            {
                a[k] = arr2[j];
                k++;
                j++;
            }
        }

        while (i < n)
        {
            a[k] = arr1[i];
            k++;
            i++;
        }

        while (j < m)
        {
            a[k] = arr2[j];
            k++;
            j++;
        }

        // Now put back the sorted elements back into the sorted array
        for (k = 0; k < n; k++)
        {
            arr1[k] = a[k];
        }

        for (int x = 0; x < m; x++)
        {
            arr2[x] = a[k];
            k++;
        }

        // Delete the dynamically created array as we don't have to use extra space
        delete[] a;
    }
};
