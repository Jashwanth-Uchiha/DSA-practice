 class Solution
{
private:
    int lastodd(string nums)
    {
        int num = INT_MIN;
        for (int i = 0; i < nums.length(); i++)
        {
            if (nums[i] % 2)
            {
                num = i;
            }
        }
        return num;
    }

public:
    string largestOddNumber(string nums)
    {
        string ans = "";
        int index = lastodd(nums);
        for (int i = 0; i <= index; i++)
        {
            ans.push_back(nums[i]);
        }
        return ans;
    }
};