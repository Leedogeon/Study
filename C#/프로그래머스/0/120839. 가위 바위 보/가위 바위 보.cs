using System;

public class Solution {
    public string solution(string rsp) {
        string answer = "";
        foreach(char c in rsp)
        {
            if(c == '2') answer+= '0';
            else if(c == '0') answer+= '5';
            else if(c == '5') answer += '2';
        }
        return answer;
    }
}