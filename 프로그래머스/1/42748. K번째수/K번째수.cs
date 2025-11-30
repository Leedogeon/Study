using System;
using System.Linq;
public class Solution {
    public int[] solution(int[] array, int[,] commands) {
        int[] answer = new int[commands.GetLength(0)];

        for (int i = 0; i < commands.GetLength(0); i++)
        {
            int[] arr = array.Skip(commands[i, 0]-1).Take(commands[i, 1] - commands[i, 0] +1).ToArray();
        Array.Sort(arr);

        answer[i] = arr[commands[i, 2] -1];
        }
        return answer;
    }
}