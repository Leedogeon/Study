using System;
class Solution
{
    public int solution(int[] nums)
    {
        int answer = 0;
        int len = nums.Length;
        int all = (len*(len-1)*(len-2)) / (3*2);
        
        int idx1 = 0;
        int idx2 = 1;
        int idx3 = 2;
        
        for(int i = 0 ;i<all; i++)
        {
            int sum = nums[idx1]+ nums[idx2]+nums[idx3];
            
            if(Find(sum)) answer++;
            
            idx3++;
            if(idx3 >= len)
            {
                idx2++;
                idx3 = (idx2+1);
            }
            if(idx2 >= len-1)
            {
                idx1++;
                idx2 = idx1+1;
                idx3 = idx2+1;
            }            
            
        }

        return answer;
    }
    
    bool Find(int sum)
    {
        for(int i = (int)Math.Sqrt(sum); i>=2;i--)
        {
            if(sum % i == 0) return false;
        }
        return true;
    }
}