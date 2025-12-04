using System;

public class Solution {
    public int solution(int n, int[,] computers) {
        int[] chk = new int[n];
        int answer = 0;
        for (int i = 0; i<n;i++)
        {
            if (chk[i] != 0) continue;
            answer++;
            DFS(i, computers, ref chk, n);
        }
        return answer;
    }
    
    void DFS(int i, int[,] computers, ref int[] chk, int n)
    {
        for (int j = 0; j < n; j++)
        {
            if (computers[i, j] == 1 && chk[j] == 0)
            {
                chk[j] = 1;
                DFS(j, computers, ref chk, n);
            }
        }
    }
}

