#include <bits/stdc++.h>

using namespace std;


int rec(int i, int p, int *a, int n){

  if(i == n) return p;
  if(a[i] % 2 == 0) {
    a[p++] = a[i];
  }
  return rec(i+1, p, a, n);
}


int main(){

  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  int d = rec(0,0,a,n);

  for(int i = 0 ; i < d ; i++)
    cout << a[i] << endl;
  return 0;
}
