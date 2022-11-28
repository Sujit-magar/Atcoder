#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,t; 
  cin>>s>>t;
  bool flag=false;
  for(int i=0;i<s.size();i++){
    if(s[i]==t[0]){
      for(int j=0;j<t.size();j++){
        if(s[i+j]==t[j] && (i+t.size())<=s.size()) {
          flag=true;
        }
        else break;
      }
    } }
  if(flag) cout<<"yes";
  else cout<<"no";
  return 0;
}
