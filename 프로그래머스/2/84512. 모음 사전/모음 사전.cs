using System;
public class Solution {
    public int solution(string word) {
        int answer = 0;
        // (0*5)+1 = 1 / (1*5)+1 = 6 / (6*5)+1 = 31 / (31*5) +1 = 156 / (156+5)+1 = 781 
        int[] mul = new int[] {781,156,31,6,1};
        
        for(int i = 0; i<word.Length;i++)
        {
            if(word[i] == 'A') continue;
            else if(word[i] == 'E') answer += mul[i];
            else if(word[i] == 'I') answer += mul[i]*2;
            else if(word[i] == 'O') answer += mul[i]*3;
            else if(word[i] == 'U') answer += mul[i]*4;
        }
        answer += word.Length;
        return answer;
    }
}