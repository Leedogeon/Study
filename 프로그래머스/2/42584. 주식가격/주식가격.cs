using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int[] solution(int[] prices) {
        int[] answer = new int[prices.Length];
Stack<int> stk = new Stack<int>();
int k = prices.Length - 1;
for (int i = 0; i < prices.Length; i++)
{
    answer[i] = k--;
    if (stk.Count == 0)
    {
        stk.Push(i);
        continue;
    }
    else
    {
        while (stk.Count != 0)
        {
            if (prices[stk.Peek()] > prices[i])
            {                
                answer[stk.Peek()] = i - stk.Peek();
                stk.Pop();
            }
            else
                break;
        }
    }
    stk.Push(i);
}
answer[answer.Length - 1] = 0;
        
        return answer;
    }
}