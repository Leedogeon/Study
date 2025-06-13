using System;

public class Solution {
    public string solution(string my_string, int num1, int num2) {
        char[] w = my_string.ToCharArray();
        char temp = w[num1];
        w[num1] = w[num2];
        w[num2] = temp;
        string answer = new string(w);
        return answer;
    }
}