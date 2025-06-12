using System;

public class Solution {
    public int solution(int n, int k){
        int sv = n/10;
        return n*12000 + (k-sv)*2000;
    }
}