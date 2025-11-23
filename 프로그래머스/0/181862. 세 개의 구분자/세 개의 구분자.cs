using System;

public class Solution {
    public string[] solution(string myStr) {
        char[] del = new char[] { 'a', 'b', 'c' };
        string[] answer = myStr.Split(del,StringSplitOptions.RemoveEmptyEntries);
        if(answer.Length == 0)
            answer = new string[] { "EMPTY" };
            
        return answer;
    }
}