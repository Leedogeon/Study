using System;
using System.Linq;
public class Solution {
    public int[] solution(int[] arr) {
        int len = arr.Length;
        int size = 1;
        while(size < len)
        {
            size *= 2;
        }

        int[] answer = arr.Concat(Enumerable.Repeat(0, size - len)).ToArray();
        return answer;
    }
}