#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
bool hasDuplicates(string s)
{
    unordered_set<char> seen;
    for (char c : s)
    {
        if (seen.count(c))
            return true;
        seen.insert(c);
    }
    return false;
}

void solve(vector<string> &ans, string output, int index, string s)
{
    if (index >= s.length())
    {

        if (!hasDuplicates(output))
        {
            ans.push_back(output);
        }

        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        output.push_back(s[i]);
        solve(ans, output, index + 1, s);
        output.pop_back();
    }
}

int main()
{
    string s = "abc";
    vector<string> ans;
    string output;
    int index = 0;
    solve(ans, output, index, s);
    for (auto x : ans)
    {
        cout << x << endl;
    }
    return 0;
}
