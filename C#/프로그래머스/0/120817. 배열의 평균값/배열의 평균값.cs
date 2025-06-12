using System;
using System.Linq;
public class Solution {
    public double solution(int[] numbers) {
        double answer = numbers.Sum();
        return answer/numbers.Length;
    }
}