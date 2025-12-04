using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int solution(string s) {
        int answer = 0;
        var queue = new Queue<char>();
var stack = new Stack<char>();

foreach(var item in s)
{
    queue.Enqueue(item);
}

for(int i = 0; i< s.Length;i++)
{
    stack.Clear();
    bool chk = true;
    foreach (var item in queue)
    {
        if (stack.Count == 0)
        {
            if (item == ']' || item == '}' || item == ')')
            {
                chk = false;
                break;
            }
            else stack.Push(item);
        }
        else
        {
            if(item == '[' || item == '{' || item == '(')
            {
                stack.Push(item);
            }
            else
            {
                if (item == ']' && stack.Peek() == '[')
                    stack.Pop();
                else if (item == '}' && stack.Peek() == '{')
                    stack.Pop();
                else if (item == ')' && stack.Peek() == '(')
                    stack.Pop();
                else
                {
                    chk = false;
                    break;
                }
            }
        }
    }
    if(stack.Count == 0 && chk)
        answer++;

    var go = queue.Dequeue();
    queue.Enqueue(go);
}
        return answer;
    }
}