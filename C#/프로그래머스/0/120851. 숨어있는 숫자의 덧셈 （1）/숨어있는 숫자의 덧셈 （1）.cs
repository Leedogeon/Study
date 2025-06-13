using System;

public class Solution {
    public int solution(string my_string) {
        int answer = 0;
        foreach(char c in my_string)
        {
            if(char.IsDigit(c))
            {
                answer += Convert.ToInt32(c.ToString());
            }
        }
        return answer;
    }
}