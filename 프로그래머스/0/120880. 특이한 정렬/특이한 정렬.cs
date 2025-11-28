using System;
using System.Linq;
public class Solution {
    public int[] solution(int[] numlist, int n) {
        int[] answer = new int[numlist.Length];
        answer = numlist.OrderBy(x => Math.Abs(n - x)).ThenByDescending(x => x).ToArray();
        return answer;
    }
}