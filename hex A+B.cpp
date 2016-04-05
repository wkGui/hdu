#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

int main(){
  long long a, b;
  while(cin>>hex>>a>>b){
    long long ans = a + b;
    if(ans >= 0)
      cout<<hex<<setiosflags(ios::uppercase)<<ans<<endl;
    else{
      ans --;
      ans = ~ans;
      cout<<hex<<setiosflags(ios::uppercase)<<"-"<<ans<<endl;
    }
  }
  return 0;
}
