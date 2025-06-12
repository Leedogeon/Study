using System;

public class Solution {
    public int solution(int[] array, int height) {
        Array.Sort(array);
        int i = array.Length;
        foreach(int a in array)
        {
            if(a > height) break;
            i--;
        }
        return i;
    }
}