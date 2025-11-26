using System;

public class Solution {
    public bool solution(string s) {
        bool answer = true;
        if(s[0] == ')') return false;
        int open = 0;
        int close = 0;
        
        foreach(char c in s)
        {
            if(c == '(') open++;
            else close++;
            
            if(open < close) return false;
        }
        if(open == close) answer = true;
        else answer = false;
        
        return answer;
    }
}