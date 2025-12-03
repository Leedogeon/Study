using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int solution(int n) {
        int answer = 0;
        if(n == 2) return 1;
        else if(n == 3) return 2;
        List<int> all = new List<int>();
        all.Add(2);
        all.Add(3);
        for(int i = 4; i<=n;i++)
        {
            bool chk = true;
            for(int j = 0; j<all.Count;j++)
            {
                if(all[j] > Math.Sqrt(i))
                {
                    chk = true;
                    break;
                }
                if(i%all[j] == 0)
                {
                    chk = false;
                    break;
                }
            }
            if(chk) all.Add(i);
        }
        answer = all.Count;
        return answer;
    }
}