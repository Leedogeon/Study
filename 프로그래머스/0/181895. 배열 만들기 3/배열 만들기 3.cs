using System;
using System.Linq;
public class Solution {
    public int[] solution(int[] arr, int[,] intervals) {
        int[] answer = Enumerable.Range(0, intervals.GetLength(0))
    .SelectMany(i => {
        int start = intervals[i, 0];
        int length = intervals[i, 1] - start+1;
        return arr.Skip(start).Take(length);
    })
    .ToArray();
        return answer;
    }
}