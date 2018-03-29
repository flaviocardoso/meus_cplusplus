#include <bits/stdc++.h>
using namespace std;

int mod (int g1, int g2){
  return g2 % g1;
}

int resto (int g1, int g2){
  return g2 % g1;
}

void maior (int* g1, int* g2){
  int swap;
  if (*g1 > *g2){
    swap = *g1;
    *g1 = *g2;
    *g2 = swap;
  }
}

int main(){
  int e, i, p1, p2;

  cin >> e;
  i = 0;
  while (e > i) {
    cin >> p1 >> p2;
    maior(&p1, &p2);
    while (mod (p2, p1) != 0) {
      p2 = resto(p1, p2);
      maior(&p1, &p2);
    }
    std::cout << p2 << '\n';
    i = i + 1;
  }

  return 0;
}
