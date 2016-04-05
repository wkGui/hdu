#include<iostream>
#include<cstring>
using namespace std;

char n[100000], m[100000];

void delete_pre(char *str){
  int tem = 0;
  if(str[0] == '-')
    tem = 1;
  int beg = tem;
  while(str[beg] == '0')
    beg++;
  for(int i=beg; i<strlen(str); i++)
    str[tem++] = str[i];
  str[tem] = '\0';
}

void delete_end(char *str){
  if(!strchr(str, '.'))
    return;
  while(str[strlen(str) - 1] == '0')
    str[strlen(str) - 1] = '\0';
}

void delete_(char *str){
  if(str[strlen(str) - 1] == '.')
    str[strlen(str) - 1] = '\0';
  if(str[strlen(str) - 1] == '-')
    str[strlen(str) - 1] = '\0';
}

int main(){
  while(cin>>n>>m){
    delete_pre(n);
    delete_pre(m);
    delete_end(n);
    delete_end(m);
    delete_(n);
    delete_(m);
//    cout<<n<<"     1"<<endl;
//    cout<<m<<"     2"<<endl;
    if(strcmp(n , m))
      cout<<"NO"<<endl;
    else
      cout<<"YES"<<endl;
  }
  return 0;
}
