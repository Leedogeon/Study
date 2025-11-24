using System;
public class Solution {
    public int solution(string s) {
        string[] temp = s.Split(" ");
        int answer = 0;
        for(int i = 0;i<temp.Length;i++)
        {
            if (temp[i] == "Z") continue;
            if (i + 1 != temp.Length)
            {
                if (temp[i + 1] == "Z") continue;
            }
            answer += Int32.Parse(temp[i]);
        }        
        return answer;
    }
}