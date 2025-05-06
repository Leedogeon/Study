#include <map>
#include <vector>
using namespace std;

int solution(string dirs) {
    int answer = 0;
    map<pair<int, int>, map<pair<int, int>, bool>> route;
    int curX = 0;
    int curY = 0;

    pair<int, int> cur = { 0,0 };
    for (auto d : dirs)
    {
        if (d == 'U')
        {
            if (curY == 5) continue;
            else curY += 1;
        }
        else if (d == 'D')
        {
            if (curY == -5) continue;
            else curY -= 1;
        }
        else if (d == 'R')
        {
            if (curX == 5) continue;
            else curX += 1;
        }
        else if (d == 'L')
        {
            if (curX == -5) continue;
            else curX -= 1;
        }

        pair<int, int> nextPos = make_pair(curX, curY);

        if (!route[cur][nextPos])
        {
            answer++;
            route[cur][nextPos] = true;
            route[nextPos][cur] = true;
        }
        cur = nextPos;

    }
    return answer;
}