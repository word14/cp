#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <climits>
#include <vector>
#include <map>
#include <list>
#include <deque>
#include <stack>
#include <set>
#include <string>
#include <cstring>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <utility>
#include <functional>

using namespace std;

#define LL long long
#define PI acos(-1.0)
#define sf scanf
#define pf printf
#define nl printf("\n")
#define FOR(i,a,b) for( i=a; i<=b; i++)
#define FORD(i,a,b) for( i=b; i>=a; i--)
#define FORS(i,n) FOR(i, 0, n-1)
#define FORM(i,n) FORD(i, 0, n-1)
#define mp make_pair
#define open freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
#define close fclose(stdin); fclose(stdout)
#define db double

const int N = 1e5 + 7;

int gcd(int a, int b) { return b? gcd(b,a%b): a; }
int lcm(int a, int b) { return a*b / gcd(a,b); }

int a[N];

int main(void)
{
	int n, i, j, ans = 0, temp;
	sf("%d", &n);
	FOR(i,1,n) sf("%d", &a[i]);
	if(n <= 2) { pf("%d\n", n); nl; return 0; }
	i = 1;
	while(i <= n-2) {
		temp = 2;
		FOR(j,i+2,n) {
			if(a[j-2] + a[j-1] == a[j])
				temp++;
			else break;
		}
		if(temp >= ans) {
			ans = temp;
			if(n-i <= ans) break;
		}
		if(temp > 2) i = j - 1;
		else i++;
	}
	cout << ans << endl;
	
	return 0;
}