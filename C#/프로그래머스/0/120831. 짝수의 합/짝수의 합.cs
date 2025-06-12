using System;

public class Solution {
    public int solution(int n) {
        if(n%2 != 0) n -=1;
        return ((((n+1)*n)/2)+(n/2))/2  ;
    }
}