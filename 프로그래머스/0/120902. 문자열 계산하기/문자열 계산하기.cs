using System;
using System.Linq;
public class Solution {
    public int solution(string my_string) {
        int answer = 0;
        string[] temp = my_string.Split(" ", StringSplitOptions.RemoveEmptyEntries);

        answer += Int32.Parse(temp[0]);
        for(int i = 1; i<temp.Length;i+=2)
        {
            if(temp[i] == "+") answer += Int32.Parse(temp[i+1]);
            else answer -= Int32.Parse(temp[i+1]);
        }
        
        
        return answer;
    }
}