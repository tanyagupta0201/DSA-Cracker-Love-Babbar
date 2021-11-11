// Using C++ STL

class Solution
{
public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {

        // your code here
        int val = (size) / 2;
        unordered_map<int, int> m;

        for (int i = 0; i < size; i++)
        {
            m[a[i]]++;
        }

        for (auto x : m)
        {
            if (x.second > val)
                return x.first;
        }
        return -1;
    }
};
