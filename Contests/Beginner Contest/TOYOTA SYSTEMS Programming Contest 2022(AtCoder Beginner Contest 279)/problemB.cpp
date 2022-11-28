//Efficient solution 
#include<iostream> 
using namespace std; 
int main(){ 
  string s,t; 
  cin>>s>>t; 
  cout<<(string::npos==s.find(t) ?"No" : "Yes");
  return 0; 
  } 

//Naive solution 
#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,t; 
  cin>>s>>t;
  int n=s.size(),m=t.size();
  for(int i=0;i<n-m+1;i++) {
    bool flag=true;
      for(int j=0;j<m;j++){
        if(s[i+j]!=t[j]) {
          flag=false;
        }
      }
       if(flag) {
         cout<<"Yes"<<endl;
         return 0;
      } 
  } cout<<"No"<<endl;
  return 0;
}
