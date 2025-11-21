using System;

public class Solution {
    public string solution(int age) {
        string num = age.ToString();
string answer = "";
for(int i = 0; i<num.Length;i++)
{
    answer += (char)(num[i] + 49);
}
        return answer;
    }
}