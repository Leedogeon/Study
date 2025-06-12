#include <string>
#include <vector>
#include <math.h>
using namespace std;

int solution(int n) {
    int answer = 0;
    int q = sqrt(n);
    return q*q == n ? 1 : 2;
}