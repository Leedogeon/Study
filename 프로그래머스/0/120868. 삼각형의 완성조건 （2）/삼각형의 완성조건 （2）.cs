using System;
using System.Linq;
public class Solution {
    public int solution(int[] sides) {
        int answer = 0;
        int max = sides.Max();
        int min = sides.Min();

        for (int i = sides.Sum(); i >= 1; i--)
        {
            if (i > max)
            {
                if (i < sides.Sum()) answer++;
            }
            else
            {
                if (i + min > max) answer++;
            }
        }
        return answer;
    }
}