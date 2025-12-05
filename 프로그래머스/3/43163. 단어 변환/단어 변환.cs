using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int solution(string begin, string target, string[] words) {
        int answer = 0;
if (!words.Contains(target)) return 0;

Stack<string> stk = new Stack<string>();

answer = route(words, begin, target, ref stk);

if (answer == int.MaxValue) answer = 0;
        return answer;
    }
    
    int route(string[] words,string cur,string target,ref Stack<string> stk)
{
    int res = int.MaxValue;

    Console.WriteLine($"cur = {cur}, target = {target}");
    if (cur == target)
    {
        Console.WriteLine("test");
        return stk.Count();
    }

    foreach(var item in words)
    {
        if(dif(cur,item) && !stk.Contains(item))
        {
            stk.Push(item);
            res = Math.Min(res, route(words, item, target,ref stk));
            stk.Pop();
        }
    }
    return res;
}

bool dif(string a, string b)
{
    int res = 0;
    for(int i = 0; i<a.Length;i++)
    {
        if (a[i] != b[i]) res++;
    }
    return res == 1 ? true : false;
}
}