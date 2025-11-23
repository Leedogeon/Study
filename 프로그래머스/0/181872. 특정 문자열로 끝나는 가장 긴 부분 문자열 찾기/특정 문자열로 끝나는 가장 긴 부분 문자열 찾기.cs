using System;

public class Solution {
    public string solution(string myString, string pat) {
        
        int startIndex = myString.LastIndexOf(pat);

        string answer = myString.Substring(0,startIndex+pat.Length);
        return answer;
    }
}