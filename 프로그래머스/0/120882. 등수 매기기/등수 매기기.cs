using System;
using System.Linq;
public class Solution {
    public int[] solution(int[,] score) {
        int[] answer = new int[score.GetLength(0)];
        int[] average = new int[score.GetLength(0)];

        for (int i = 0; i < score.GetLength(0); i++)
        {
            average[i] = (score[i, 0] + score[i,1]);

        }
        int[] grade = average.OrderByDescending(x=>x).ToArray();

        for (int i = 0; i < average.Length; i++)
        {
            answer[i] = (Array.IndexOf(grade, average[i]) + 1);
        }
        return answer;
    }
}