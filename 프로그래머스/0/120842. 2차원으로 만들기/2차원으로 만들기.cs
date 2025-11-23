using System;

public class Solution {
    public int[,] solution(int[] num_list, int n) {
        int[,] answer = new int[num_list.Length/n,n];
        
        int cnt = 0;
        for(int i = 0; i<num_list.Length;i+=n)
        {
            for(int j = 0;j<n;j++)
            {
                answer[cnt,j] = num_list[i+j];
            }
            cnt++;
        }
        return answer;
    }
}