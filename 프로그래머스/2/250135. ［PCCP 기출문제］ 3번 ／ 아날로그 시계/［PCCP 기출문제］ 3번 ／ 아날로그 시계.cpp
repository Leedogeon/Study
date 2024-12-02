#include <string>
#include <vector>

using namespace std;

int solution(int h1, int m1, int s1, int h2, int m2, int s2) {
    int answer = -1;
    int s = 60 * 12;
int m = 12;
int h = 1;
    	int cs = s1 * s;
	int cm = m1 * 720 + s1*m;
	int ch = h1 * 3600 + s1 + m1*60;

	int cycle = 60 * 60 * 12;
	int count = 0;
	

	if (cs == cm || cs == ch) count++;
	while (h1 != h2 || m1 != m2 || s1 < s2)
	{
		int ps = cs;
		int pm = cm;
		int ph = ch;
		s1 += 1;
		if (s1 == 60)
		{
			s1 = 0;
			m1 += 1;
		}
		if (m1 == 60)
		{
			m1 = 0;
			h1 += 1;
		}

		cs += s;
		cm += m;
		ch += h;

		if (ps < pm && cs >= cm)
		{
			count++;
		}
		if (ps < ph && cs >= ch)
		{
			count++;
			if (cm == ch) count--;
		}

		

		if (cs >= cycle) cs -= cycle;
		if (cm >= cycle) cm -= cycle;
		if (ch >= cycle) ch -= cycle;

		
	}
    return count;
}