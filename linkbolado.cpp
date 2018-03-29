#include <bits/stdc++.h>
using namespace std;

void maiuscula(string* d){
  for (auto & l : *d) l = toupper(l);
}

int main(int argc, char const *argv[]) {
  string link, linkbolado = "(zelda)(.*)";

  cin >> link;

  transform(link.begin(), link.end(), link.begin(), ::tolower); // transforma string em upperCase
  //maiuscula(&link);
  //std::cout << link << '\n';
  if (regex_match(link, regex(linkbolado))){ //verifica Zelda na string
    cout << "Link Bolado" << endl;
  }else{
    cout << "Link Tranquilo" << endl;
  }
  return 0;
}
