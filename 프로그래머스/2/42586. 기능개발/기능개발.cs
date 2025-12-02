using System;
using System.Linq;
public class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        int[] date = new int[progresses.Length];

for(int i= 0; i< progresses.Length;i++)
{
    int day = 100 - progresses[i];
    date[i] = day /speeds[i];
    if (day % speeds[i] != 0) date[i]++;
}

        for(int i = 1; i<date.Length;i++)
        {
            if (date[i] < date[i - 1]) date[i] = date[i - 1];
        }

        int[] answer = date.GroupBy(x => x).Select(c=>c.Count()).ToArray();
        return answer;
    }
}