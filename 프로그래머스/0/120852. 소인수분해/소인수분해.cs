using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int[] solution(int n) {
        var answer = new List<int>();
        int num = 2;
        while(n != 1)
        {
            if(n%num == 0)
            {
                answer.Add(num);
                while(n%num == 0)
                    n/=num;
            }
            num++;
        }
        
        return answer.ToArray();
    }
}