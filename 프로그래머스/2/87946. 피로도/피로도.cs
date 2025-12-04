using System;

public class Solution {
    public int solution(int k, int[,] dungeons) {
        bool[] chk = new bool[dungeons.GetLength(0)];
int max = 0;
DFS(k, 0, chk, dungeons, ref max);
        return max;
    }
    
    void DFS(int k, int count, bool[] chk, int[,] dungeons, ref int max)
{
    for (int i = 0; i < dungeons.GetLength(0);i++)
    {
        int cnt = count;
        if (chk[i] == false)
        {
            if (dungeons[i,0] <= k)
            {
                var newC = (bool[])chk.Clone();
                cnt++;
                if (cnt > max) max = cnt;
                newC[i] = true;
                DFS(k - dungeons[i, 1], cnt, newC, dungeons, ref max);
            }
        }
    }

}
}