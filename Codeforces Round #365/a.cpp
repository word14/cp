#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  int a = 0, b = 0;
  while (n--) {
    int u, v;
    scanf("%d %d", &u, &v);
    if (u > v) a++;
    else if(u < v) b++;
  }
  if (a > b) puts("Mishka");
  else if(a < b) puts("Chris");
  else puts("Friendship is magic!^^");

  return 0;
}
