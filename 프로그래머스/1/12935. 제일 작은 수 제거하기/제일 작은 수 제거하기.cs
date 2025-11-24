using System.Linq;
using System;
public class Solution {
    public int[] solution(int[] arr) {
        int min = arr.Min();
        int[] answer = arr.Where(x=> x!=min).ToArray();
        if (answer.Length == 0) answer = new int[] { -1 };
        return answer;
    }
}