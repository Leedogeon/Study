using System;

public class Solution {
    public string solution(string[] cards1, string[] cards2, string[] goal) {
        string answer = "";
        int c1 = 0;
        int c2 = 0;

        for(int i = 0; i<goal.Length;i++)
        {
            bool chk = false;
            if (c1 < cards1.Length)
            {
                if (goal[i] == cards1[c1])
                {
                    c1++;
                    chk = true;
                }
            }

            if(c2 < cards2.Length)
            {
                if (goal[i] == cards2[c2])
                {
                    c2++;
                    chk = true;
                }
            }

            if(!chk)
            {
                answer = "No";
                break;
            }
        }

        if(!answer.Equals("No"))
        {
            answer = "Yes";
        }
        return answer;
    }
}