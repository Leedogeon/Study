using System;
using System.Linq;
using System.Collections.Generic;
class Solution
{
    public int[] solution(int n, string[] words)
    {
        int[] answer = new int[2];
        List<string> res = new List<string>();
        for(int i = 0; i<words.Length;i++)
        {
            
            if(res.Count != 0)
            {
                if(res[res.Count-1].Last() != words[i][0])
            {
                answer[0] = (i%n)+1;
                answer[1] = i/n+1;
                break;
            }
            }
            
            
            if(!res.Contains(words[i]))
            {
                 res.Add(words[i]);
            }
            else
            {
                answer[0] = (i%n)+1;
                answer[1] = i/n+1;
                break;
            }
        }
        
        return answer;
    }
}