public class Solution {
    public int solution(int num) {
        int answer = 0;
        long max = (long)num;
        while(max != 1)
        {
            if(answer ==500)
            {
                answer = -1;
                break;
            }
            if(max %2 == 0) max/=2;
            else if(max %2 != 0) max = max*3+1;
            answer++;
        }
        
        
        return answer;
    }
}