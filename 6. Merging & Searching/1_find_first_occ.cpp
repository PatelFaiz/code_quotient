#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int find(int k, int arr[], int n){
  for(int i=0; i<n; i++){
    if(arr[i] == k){
      return i;
    }
  }
  return -1;
}
int main()
{
  int t;
  cin>>t;
  while(t--){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    cout<<find(k, arr, n)<<endl;
  }
   return 0;
}