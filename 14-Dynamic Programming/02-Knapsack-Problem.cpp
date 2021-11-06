class Solution
{
public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n)
    {
        // Your code here
        int t[n + 1][W + 1];

        for (int i = 0; i < n + 1; i++)
        {
            for (int j = 0; j < W + 1; j++)
            {
                // Base Case
                if (i == 0 || j == 0)
                {
                    t[i][j] = 0;
                }

                // If the current weight is less than the weight of the knapsack
                else if (wt[i - 1] <= j)
                {
                    // Including the current weight
                    int include = val[i - 1] + t[i - 1][j - wt[i - 1]];

                    // Excluding the current weight
                    int exclude = t[i - 1][j];

                    // Taking the max of include and exclude for max profit
                    t[i][j] = max(include, exclude);
                }

                // If the current weight is more than the weight of the knapsack
                else if (wt[i - 1] > j)
                {
                    t[i][j] = t[i - 1][j];
                }
            }
        }

        return t[n][W];
    }
};