public class Solution {
    public long solution(int a, int b) {
        long answer = 0;
        if(a==b) return a;
        int L, R;
        (L,R) = a<b ? (a,b) : (b,a);
        for(int i = L; i<=R;i++)
        {
            answer+=i;
        }
        return answer;
    }
}