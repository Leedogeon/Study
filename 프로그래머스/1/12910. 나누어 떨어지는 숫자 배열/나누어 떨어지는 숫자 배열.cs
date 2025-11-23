using System.Linq;
using System;
public class Solution {
    public int[] solution(int[] arr, int divisor) {
        Array.Sort(arr);
        int[] answer = arr.Where(x=>x%divisor == 0).ToArray();
        if(answer.Length == 0) answer = new int[] { -1 };
        return answer;
    }
}