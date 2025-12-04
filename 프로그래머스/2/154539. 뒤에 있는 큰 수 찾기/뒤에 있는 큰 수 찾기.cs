using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int[] solution(int[] numbers) {
        int[] answer = new int[numbers.Length];
        Stack<int> stk = new Stack<int>();
        for(int i = 0; i<numbers.Length;i++)
        {
            answer[i] = -1;
            int n = numbers[i];
            while(stk.Count > 0)
            {
                if(numbers[stk.Peek()] < n)
                {
                    answer[stk.Pop()] = n;
                }
                else break;
            }
            stk.Push(i);
        }
        
        return answer;
    }
}