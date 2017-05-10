#include <bits/stdc++.h>
using namespace std;

void add_one(string &s){
  int len = s.length();
  int carry = 0;
  while(--len > -1){
    int d = s[len] - '0';
    if(d < 9) {
      s[len] = d + 1 + '0';
      carry = 0;
      break;
    }else{
      s[len] = '0';
      carry = 1;
    }
  }

  if(carry == 1)
    s = '1' + s;
}

int main(){
  int test;
  string s;
  cin >> test;
  while(test--){
    cin >> s;
    bool odd = false, inc = false;
    int len = s.length();
    if(s[len-1] == '9') {
      add_one(s);
      len = s.length();
    }
    if(len%2 == 1) odd = true;

    for(int i = 0, j = len-1; i < j; i++, j--){

      if(i==0 && s[i] != s[j]){
        s[j] = s[i];
        inc = true;
      }

      if(i!=0 && s[i] < s[j]){
        int r = s[i] - '0';
        r+=1;
        s[i] = s[j] = (r + '0');
        inc = true;
      }else if(i!=0 && s[i] > s[j]){
        s[j] = s[i];
      }
    }

    if(odd && !inc)
      {
        int d = s[len/2] - '0';
        if(d < 9) {
          s[len/2] = d+1+'0';
        }
        else{
          int aa = 1;
          while(d>8){
            s[len/2 - (aa-1)]='0';
            d = s[len/2 - aa] - '0';
            s[len/2 - aa] = d+1+'0';
            s[len/2 + aa] = s[len/2 - aa];
            aa++;
          }
        }
      }
    cout << s << endl;
  }


}
