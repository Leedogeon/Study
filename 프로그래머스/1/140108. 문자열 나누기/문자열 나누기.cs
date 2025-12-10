using System;

public class Solution {
    public int solution(string s) {
        int answer = 0;
        char chk = ' ';
        int cnt1 = 0;
        int cnt2 = 0;
        foreach(var item in s)
        {
            if(chk == ' ')
            {
                chk = item;
                cnt1++;
            }
            else
            {
                if(chk == item)
                {
                    cnt1++;
                }
                else
                {
                    cnt2++;
                }
                
                if(cnt1 == cnt2)
                {
                    answer++;
                    cnt1 = 0;
                    cnt2 = 0;
                    chk = ' ';
                }
            }
        }
        if(chk != ' ') answer++;
        return answer;
    }
}