
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int right = s.size() - 1;
        int left = 0;

        while (left < right)
        {
            char c = s[left];
            s[left] = s[right];
            s[right] = c;

            left += 1;
            right += 1;
        }
    }
};