
#include <bits/stdc++.h>
using namespace std;
string firstPalindrome(vector<string> &words)
{

    for (int i = 0; i < words.size(); i++)
    {
        if (isPalindromic(words[i]))
        {
            return words[i];
        }
    }
    return "";
}
bool isPalindromic(string word)
{
    int i = 0;
    int j = word.size() - 1;
    while (i < j)
    {
        if (word[i] != word[j])
            return false;
        i++;
        j--;
    }
    return true;
}