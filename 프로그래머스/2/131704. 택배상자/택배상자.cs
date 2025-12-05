using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int solution(int[] order) {
        int answer = 0;
        Stack<int> stk = new Stack<int>();
int k = 1;

for (int i = 0; i < order.Length; i++)
{
    bool chk = true;

    while (order[i] != k)
    {
        if(stk.Count() != 0)
        {
            if(stk.Peek() == order[i])
            {
                stk.Pop();
                answer++;
                break;
            }
        }

        if (k > order.Length)
        {
            chk = false;
            break;
        }
        stk.Push(k++);
    }
    if (!chk) break;

    if (order[i] == k)
    {
        answer++;
        k++;
    }

}
        return answer;
    }
}