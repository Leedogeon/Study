using System;
using System.Linq;
public class Solution {
    public int solution(int[] numbers) {
        int answer = 45;
        int sum = numbers.Sum();
        return answer -= sum;
    }
}