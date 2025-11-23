using System;
using System.Linq;
public class Solution {
    public int solution(int i, int j, int k) {
        int answer = Enumerable.Range(i, j - i + 1).Sum(x => {return x.ToString().Count(c => c.ToString().Contains(k.ToString()));});
        return answer;
    }
}