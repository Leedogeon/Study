using System;

public class Solution {
    public int solution(string s) {
        string[] num = {"zero","one", "two","three","four","five","six","seven","eight","nine"};

        for(int i = 0; i<num.Length;i++)
        {
            if (s.Contains(num[i])) s = s.Replace(num[i], i.ToString());
        }
        
        return Int32.Parse(s);
    }
}