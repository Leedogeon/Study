using System;
public class Solution {
    public string solution(int a, int b) {
        DateTime now = new DateTime(2016, a, b);
        string answer = now.DayOfWeek.ToString().Substring(0, 3).ToUpper();
        
        return answer;
    }
}