#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

const int MAX = 1e9;

void sub(int &n, int &m){
  n = sqrt(m*2);
  while(n){
    int a1 = m/n-(n-1)/2;
    if(a1*n + n*(n-1)/2 == m)
      cout<<"["<<a1<<","<<a1+n-1<<"]"<<endl;
    n--;
  }
}

int main(){
  int n, m;
  while(cin>>n>>m&&n){
    sub(n, m);
    cout<<endl;
  }
  return 0;
}
