#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  cin>>n;
  long long arr[n];
  cin>>arr[0];
  int num=arr[0];
  cout<<num<<" ";
  for(int i=1;i<n;i++){
      cin>>arr[i];
      cout<<arr[i]-arr[i-1]<<" ";
  }
  return 0;
}
