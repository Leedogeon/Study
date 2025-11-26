using System;

public class Solution {
    public int solution(int[] d, int budget) {
        int answer = 0;
        Array.Sort(d);
        int sum = 0;
        foreach(int i in d)
        {
            sum+=i;
            if(budget >= sum) answer++;
        }
        return answer;
    }
}