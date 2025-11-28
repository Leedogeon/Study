using System;
public class Solution {
    public int[] solution(int brown, int yellow) {
        int all = brown + yellow;
        int[] answer = new int[2];
        for (int i = 3;i<= all/3;i++)
        {
            if (all % i != 0) continue;
            int x = i;
            int y = all / i;
            if((x+y)*2 -4 != brown) continue;

            if((x-2)*(y-2) == yellow)
            {
                answer[0] = Math.Max(x, y);
                answer[1] = Math.Min(x, y);
            }
        }
        return answer;
    }
}