using System;

public class Solution {
    public int[] solution(int numer1, int denom1, int numer2, int denom2) {
        int[] answer = new int[2];
        
        int max = 0;
        int min = 0;
        (max,min) = (denom1>denom2) ? (denom1,denom2) : (denom1,denom2);
        int g = gcd(max,min);
        int l = (max*min)/g;
        
        numer1 *= l/denom1;
        numer2 *= l/denom2;
        int n = numer1+numer2;
        (max,min) = (n > l) ? (n,l) : (l,n);
        g = gcd(max,min);
        n/= g;
        l/= g;
        answer[0] = n;
        answer[1] = l;
        
        return answer;
    }
    int gcd(int a,int b)
    {
        if(b == 0) return a;
        
        return gcd(b,a%b);
    }
}