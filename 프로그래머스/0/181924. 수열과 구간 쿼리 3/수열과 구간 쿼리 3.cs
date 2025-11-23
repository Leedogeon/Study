using System;

public class Solution {
    public int[] solution(int[] arr, int[,] queries) {
        int[] answer = new int[] {};
        for (int i = 0; i < queries.GetLength(0); ++i)
        {
            int L = queries[i,0];
            int R = queries[i,1];
            
            int temp = arr[L];
            arr[L] = arr[R];
            arr[R] = temp;
        }
        
        return arr;
    }
}