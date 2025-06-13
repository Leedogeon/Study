using System;
using System.Linq;
public class Solution {
    public int solution(int[] numbers) {
        int answer = 0;
        Array.Sort(numbers);
        int a = numbers[0]*numbers[1];
        int b = numbers[numbers.Length-2]*numbers[numbers.Length-1];
        
        return a>b ? a:b;
    }
}