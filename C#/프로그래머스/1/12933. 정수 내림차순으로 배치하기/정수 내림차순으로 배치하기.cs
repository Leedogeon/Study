using System;
using System.Linq;
public class Solution {
    public long solution(long n) {
        long answer = 0;
        string s = n.ToString();
        int[] arr = new int[s.Length];
        for(int i = 0; i<s.Length;i++)
        {
            arr[i] = s[i]-'0';
        }
        Array.Sort(arr);
        for(int i = 0; i<arr.Length;i++)
        {
            answer += arr[i]*(long)Math.Pow(10, i);
        }
        return answer;
    }
}