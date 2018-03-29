#include <bits/stdc++.h>
using namespace std;

string desl1(string d){
  string out;
  int r;
  for(int j = 0; j < d.length(); j++){
    r = 0;
    if(isalpha(d[j])){
      r = ((int)d[j]) + 3;
      out = out + (((char)r)) ;
    }else{
      out = out + (d[j]);
    }
  }
  return out;
}

string desl2(string d){
  string out;
  int r;
  for(int j = 0; j < d.length(); j++){
    r = ((int)d[j]) - 1;
    out = out + ((char)r);
  }
  return out;
}

int main(){
  int i, t, r, m, t_s;
  string mens, encript;
  cin >> t;
  while(t > i){
    encript = "";
    getline(cin, mens);
    encript = desl1(mens);
    t_s = encript.length();
    reverse(encript.begin(), encript.end());
    m = t_s / 2;
    encript = encript.substr(0, m) + desl2(encript.substr(m, m+1));

    if(t_s > 0){
      cout << encript << endl;
    } else{
      i = i - 1;
    }
    i = i + 1;
  }
return 0;
}
