using System;
using System.Linq;
public class Solution {
    public int solution(string myString, string pat) {
        int answer = 0;
        string chk = "";
        for(int i =0;i< myString.Length; i++)
        {
            chk = myString.Substring(0, myString.Length - i);
            if(chk.EndsWith(pat))
            {
                answer++;
            }
        }
        return answer;
    }
}