/* The square root of N will give number of perfect squares less than and equal to it, Since we need to calculate only the perfect squares which are less than it so if sqrt(N) comes out to be perfect square we are subtracting 1 from it */

class Solution
{
public:
    int countSquares(int N)
    {
        int x = sqrt(N);

        if (x * x == N)
        {
            return x - 1;
        }
        else
        {
            return x;
        }
    }
};