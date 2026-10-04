#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                return 1;
            }
        }

        int startindex = 0;
        int endindex = 0;
        sort(nums.begin(),nums.end());


        while (endindex < nums.size())
        {
            
            
        }

        return 0;
    }
};
int main()
{
    Solution l;
    vector<int> ans;
    ans = {2, 3, 1, 2, 4, 3};
    cout << l.minSubArrayLen(7, ans);
}