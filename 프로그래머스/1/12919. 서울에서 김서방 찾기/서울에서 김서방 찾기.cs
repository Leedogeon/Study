using System;
public class Solution {
    public string solution(string[] seoul) {
        int a = Array.IndexOf(seoul, "Kim");
        string answer = $"김서방은 {a}에 있다";
        return answer;
    }
}