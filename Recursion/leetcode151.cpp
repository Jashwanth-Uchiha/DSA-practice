class Solution
{
public:
    string reverseWords(string s)
    {
        string ans = "";
        string word = "";
        s = s + ' ';
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
            {
                word = word + s[i];
            }
            else
            {
                if (word != "")
                {
                    if (ans != "")
                    {
                        ans = " " + ans;
                    }
                    ans = word + ans;
                    word = "";
                }
            }
        }
        return ans;
    }
};