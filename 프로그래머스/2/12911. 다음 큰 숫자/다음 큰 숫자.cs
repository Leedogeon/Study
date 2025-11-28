using System;
using System.Linq;
class Solution 
{
    public int solution(int n) 
   {
        int answer = 0;
        int cnt = Convert.ToString(n, 2).Count(c => c == '1');
        while(true)
        {
            n += 1;
            int find = Convert.ToString(n, 2).Count(c => c == '1');
            if (cnt == find) break;
        }
        return n;
    }
}