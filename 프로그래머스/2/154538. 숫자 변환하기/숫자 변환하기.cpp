#include <string>
#include <vector>
#include <climits>
#include <queue>
using namespace std;

int solution(int x, int y, int n) {
    int answer = INT_MAX;
vector<int> chk(y+1, INT_MAX);
queue<pair<int, int>> que;

int val = 0;
int cnt = 0;
if (x == y) return 0;

que.push({ x, 0 });
while (!que.empty())
{
	val = que.front().first;
	cnt = que.front().second;
	que.pop();

	if (answer <= cnt) continue;

	if (val == y) answer = answer < cnt ? answer : cnt;

	if (val + n <= y && (cnt + 1) < chk[val + n])
		{
			chk[val + n] = cnt + 1;
			que.emplace(val + n, cnt + 1);
		}
	
	

		if (val * 2 <= y && (cnt + 1) < chk[val * 2])
		{
			chk[val * 2] = cnt + 1;
			que.emplace(val * 2, cnt + 1);
		}
	

	
		if (val * 3 <= y && (cnt + 1) < chk[val * 3])
		{
			chk[val * 3] = cnt + 1;
			que.emplace(val * 3, cnt + 1);
		}
	
	

}
    if(answer != INT_MAX) return answer;
    else return -1;
}