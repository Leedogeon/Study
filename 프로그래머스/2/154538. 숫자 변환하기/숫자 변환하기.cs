using System;
using System.Linq;
public class Solution {
    public int solution(int x, int y, int n) {
        int answer = 0;
        if(x == y )return 0;
        int[] arr = new int[y + 1];
for (int i = 0; i < arr.Length; i++)
{
    arr[i] = int.MaxValue;
}
arr[x] = 0;
for (int i = x; i <= y; i++)
{
    if (arr[i] == int.MaxValue) continue;

    if (i + n <= y)
        arr[i + n] = Math.Min(arr[i + n], arr[i]+1);

    if (i * 2 <= y)
        arr[i * 2] = Math.Min(arr[i * 2], arr[i] + 1);
    if (i * 3 <= y)
    {
        arr[i * 3] = Math.Min(arr[i * 3], arr[i] + 1);
    }
}
        
        if(arr[y] == int.MaxValue)
            answer = -1;
        else answer = arr[y];
        return answer;
    }
}