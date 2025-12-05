using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int solution(int[,] lines) {
        int answer = 0;
        Dictionary<int,int> dict = new Dictionary<int,int>();
        for(int i = 0; i<lines.GetLength(0);i++)
        {
            for(int j = lines[i,0]; j < lines[i,1];j++)
            {
                if(!dict.ContainsKey(j))
                {
                    dict.Add(j,1);
                }
                else dict[j]++;
            }
        }
        foreach(var item in dict)
        {
            if(item.Value > 1) answer++;
        }
        
        return answer;
    }
}