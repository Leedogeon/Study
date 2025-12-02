using System;
using System.Linq;
public class Solution {
    public int solution(int[] citations) {
        int answer = 0;
        for (int i = citations.Max(); i > 0; i--)
        {
            int a = citations.Count(x => x >= i);
            if(a >= i)
            {
                answer = i;
                break;
            }
        }
        return answer;
    }
}