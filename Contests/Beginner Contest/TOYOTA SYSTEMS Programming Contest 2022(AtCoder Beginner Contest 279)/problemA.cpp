#include<iostream> 
using namespace std; 
int main(){ 
  string s; 
  cin>>s; 
  int sum=0;
  for(int i=0;i<s.size();i++){ 
    if(s[i]=='v') sum++; 
    else sum+=2; 
    } 
  cout<<sum; 
  return 0; 
  } 
