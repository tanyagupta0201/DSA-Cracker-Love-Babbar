class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
        int currSum = 0, maxSum = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            currSum += arr[i];
            maxSum = max(maxSum, currSum);

            if (currSum < 0)
            {
                currSum = 0;
            }
        }
        return maxSum;
    }
};