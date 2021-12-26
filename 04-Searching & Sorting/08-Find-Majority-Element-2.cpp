// Using Boyer-Moore Majority Voting Algorithm

class Solution
{
public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        // your code here
        int candidate = -1;
        int vote = 0;
        for (int i = 0; i < size; i++)
        {
            if (vote == 0)
            {
                candidate = a[i];
                vote = 1;
            }

            else if (candidate == a[i])
            {
                vote++;
            }
            else
            {
                vote--;
            }
        }

        int count = 0;

        // Checking if majority candidate occurs more than n/2 times
        for (int i = 0; i < size; i++)
        {
            if (a[i] == candidate)
                count++;
        }

        if (count > size / 2)
        {
            return candidate;
        }
        else
        {
            return -1;
        }
    }
};