using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int[] solution(string[] operations) {
        List<int> num = new List<int>();
int[] answer = new int[2];
for(int i = 0; i < operations.Length; i++)
{
    if (operations[i][0] == 'I')
    {
        num.Add(Int32.Parse(operations[i].Substring(2,operations[i].Length - 2)));
    }
    else if(operations[i][0] == 'D' && num.Count != 0)
    {
        
        if (operations[i].Substring(2, operations[i].Length-2) == "-1")
        {
            num.Remove(num.Min());
        }
        else
        {
            num.Remove(num.Max());
        }
    }
}
if(num.Count == 0 )
{
    answer[0] = 0;
    answer[1] = 0;
}
else
{
    answer[0] = num.Max();
    answer[1] = num.Min();
}
        return answer;
    }
}