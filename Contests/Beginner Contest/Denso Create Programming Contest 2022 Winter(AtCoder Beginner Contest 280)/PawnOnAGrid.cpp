#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,w;
  cin>>h>>w;
  int res=0;
  while(h--){
    string s;
    cin>>s;
    for(int i=0;i<w;i++){
        if(s[i]=='#'){
            res++;
        }
    }
  } cout<<res;
  return 0;
}
