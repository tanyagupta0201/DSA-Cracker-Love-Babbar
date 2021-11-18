int isPalindrome(char S[])
{
    int l = strlen(S);

    if (l == 1)
        return 1;

    for (int i = 0; i < l / 2; i++)
    {
        if (S[i] != S[l - i - 1])
            return 0;
    }
    return 1;
}