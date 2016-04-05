#include<iostream>
using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    char x;
    int  y;
    cin>>x>>y;
    if(x >= 'a'){
      cout<<int(-(x-'a'+1)) + y <<endl;
    }
    else{
      cout<<int(x-'A'+1) + y <<endl;
    }
  }
  return 0;
}
