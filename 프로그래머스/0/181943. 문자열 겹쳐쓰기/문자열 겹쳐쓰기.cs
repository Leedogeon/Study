using System;

public class Solution {
    public string solution(string my_string, string overwrite_string, int s) {
        string answer = "";
        answer += my_string.Substring(0, s);
        answer += overwrite_string;
        if(overwrite_string.Length + s < my_string.Length)
        {
            answer += my_string.Substring(overwrite_string.Length + s, my_string.Length - (overwrite_string.Length + s));
        }
        return answer;
    }
}