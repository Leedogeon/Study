using System;

public class Solution {
    public int[] solution(string[] strlist) {
        int[] answer = new int[strlist.Length];
        int index = 0;
        foreach(string s in strlist)
        {
            answer[index] = s.Length;
            
            index++;
        }
        
        return answer;
    }
}