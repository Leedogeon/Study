using System;

public class Solution {
    public int solution(int[] number) {
        int answer = 0;
        int len = number.Length;
        for(int i = 0; i<len-2;i++)
        {
            int sum = number[i];
            for(int j = i+1;j<len-1;j++)
            {
                sum += number[j];
                for(int k = j+1;k<len;k++)
                {
                    if (sum + number[k] == 0) answer++;
                }
                sum -= number[j];
            }
        }
        return answer;
    }
}