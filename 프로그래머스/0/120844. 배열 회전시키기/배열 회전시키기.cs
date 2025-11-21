using System;
using System.Collections.Generic;
public class Solution {
    public int[] solution(int[] numbers, string direction) {
        List<int> answer = new List<int>();
if(direction == "right")
{

    answer.Add(numbers[numbers.Length - 1]);
    for(int i = 0;i<=numbers.Length-2;i++)
    {
        answer.Add(numbers[i]);
    }
}
else if (direction == "left")
{
    
    for (int i = 1; i <= numbers.Length - 1; i++)
    {
        answer.Add(numbers[i]);
    }
    answer.Add(numbers[0]);
}
        return answer.ToArray();
    }
}