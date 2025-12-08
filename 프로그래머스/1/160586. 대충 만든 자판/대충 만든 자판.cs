using System;
using System.Linq;
public class Solution {
    public int[] solution(string[] keymap, string[] targets) {
        int[] answer = new int[targets.Length];
int index = 0;


foreach(var item in targets)
{
    foreach(var word in item)
    {
        bool chk = true;
        int min = int.MaxValue;
        foreach(var key in keymap)
        {
            if(key.Contains(word))
            {
                min = Math.Min(key.IndexOf(word),min);
            }
        }
        if(min == int.MaxValue)
        {
            answer[index] = -1;
            chk = false;
            break;
        }
        else answer[index] += (min+1);
        if (!chk) break;
    }
    index++;
}
        
        return answer;
    }
}