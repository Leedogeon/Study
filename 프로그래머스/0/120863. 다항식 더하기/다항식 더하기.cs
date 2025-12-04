using System;

public class Solution {
    public string solution(string polynomial) {
        string answer = "";
        string[] all = polynomial.Split(" ");
        
        int x = 0;
        int n = 0;
        for(int i =0; i<all.Length;i++)
        {
            if(all[i].Contains("x"))
            {
                if(all[i].Length == 1) x++;
                else x+= Int32.Parse(all[i].Substring(0,all[i].Length-1));
            }
            else if(all[i] != "+")
            {
                n+= Int32.Parse(all[i]);
            }
        }
        
        if(x != 0)
        {
            if(x==1) answer += "x";
            else answer += x + "x";
        }
        
        if(n != 0)
        {
            if(x!=0)
            {
                answer += " + ";
            }
            answer += n;
        }
        
        
        
        return answer;
    }
}