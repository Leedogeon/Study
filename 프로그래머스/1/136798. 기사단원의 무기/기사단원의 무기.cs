using System;

public class Solution {
    public int solution(int number, int limit, int power) {
        int answer = 0;
        for(int i = 1; i<=number;i++)
        {
            if(i == 1)
            {
                answer +=1;
                continue;
            }
            int sum = 2;
            for(int j =2; j<=i/2;j++)
            {
                if(i%j == 0)
                    sum++;
            }
            if(sum > limit) sum = power;
            answer += sum;    
        }
        
        return answer;
    }
}