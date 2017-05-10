#include <bits/stdc++.h>
using namespace std;

void add(string &s){
  int len = s.length();
  int carry = 0;
  while(--len > -1){
    int d = s[len] - '0';
    if(d < 9){
      s[len] = d+1+'0';
      carry = 0;
      break;
    }
    else{
      s[len] = '0';
      carry = 1;
    }
  }
  if(carry == 1)
    s = '1' + s;
}

int main(){
  string s;
  while(cin >> s && s != "0"){
    add(s);
    cout << s << endl;
  }
  return 0;
}
