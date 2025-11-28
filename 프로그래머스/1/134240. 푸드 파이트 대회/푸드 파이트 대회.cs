using System;
using System.Linq;
public class Solution {
    public string solution(int[] food) {
        string left = "";
        for(int i = 1; i<food.Length;i++)
        {
            if (food[i]/2 >=1)
            {
                left += string.Join("",Enumerable.Repeat(i, food[i] / 2));
            }
        }
        string right = string.Join("",left.Reverse());
        string answer = "";
        answer += left + "0" + right;
        return answer;
    }
}