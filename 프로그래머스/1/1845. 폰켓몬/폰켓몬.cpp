#include <vector>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    vector<vector<int>> cnt;
    for(int i = 0; i<nums.size();i++)
    {
        if(cnt.empty())
        {
            cnt.push_back({nums[i],1});
        }
        else
        {
            bool chk = false;
            for(auto& c : cnt)
            {
                if(c[0] == nums[i])
                {
                    c[1]++;
                    chk = true;
                    break;
                }
            }
            if(!chk) cnt.push_back({nums[i],1});
        }
    }
    
    if(nums.size()/2 <= cnt.size()) return nums.size()/2;
    else
    {
        return cnt.size();
    }
}