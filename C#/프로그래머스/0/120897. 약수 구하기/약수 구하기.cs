using System;
using System.Linq;
public class Solution {
    public int[] solution(int n) {
        int[] answer = Enumerable.Range(1, n / 2).Where(x => n % x == 0).ToArray();
answer = answer.Append(n).ToArray();
        return answer;
    }
}