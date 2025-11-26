using System;
public class Solution {
    public string solution(string s) {
        s = s.ToLower();
        string answer = "";
        for(int i = 0; i<s.Length;i++)
        {
            if (i == 0 || s[i - 1] == ' ') answer += char.ToUpper(s[i]);
            else answer += s[i];
        }
        
        return answer;
    }
}