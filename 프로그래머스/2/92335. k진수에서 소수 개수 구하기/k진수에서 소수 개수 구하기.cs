using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int solution(int n, int k) {
        int answer = 0;
        string res = "";
        while(n > 0)
        {
            res+= n % k;
            n /= k;
        }
        string ans = string.Concat(res.Reverse());

        List<long> all = new List<long>();


for(int i = 0; i<ans.Length;i++)
{
    if (ans[i] == '0') continue;
    string temp = "";
    for(int j = i; j<ans.Length;j++)
    {
        if (ans[j] == '0') break;
        else temp += ans[j];
    }
    if(long.Parse(temp) == 1) continue;
    all.Add(long.Parse(temp));
    i+= temp.Length - 1;
}


foreach(var i in all)
{
    bool chk = true;
    for(long q = 2; q<=Math.Sqrt(i);q++)
    {
        if(i % q == 0)
        {
            chk = false;
            break;
        }
    }
    if (chk) answer++;
}
        return answer;
    }
}