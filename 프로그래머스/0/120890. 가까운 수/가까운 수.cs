using System;

public class Solution {
    public int solution(int[] array, int n) {
        int answer = 0;
        int dif = 999;
        
        foreach(int i in array)
        {
            if(dif > Math.Abs(n-i))
            {
                dif = Math.Abs(n-i);
                answer = i;
            }
            else if(dif == Math.Abs(n-i))
            {
                answer = answer < i ? answer : i;
            }
        }
        
        return answer;
    }
}