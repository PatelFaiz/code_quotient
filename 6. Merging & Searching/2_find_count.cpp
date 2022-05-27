#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int count(int k, int arr[], int n){
  int num=0;
  int i=0;
  while(i<n){
    if(arr[i] == k)
      num++;
    i++;
  }
  return num;
}
int main()
{
  int t;
  cin>>t;
  while(t--){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i<n; i++){
      cin>>arr[i];
    }
    cout<<count(k, arr, n)<<endl;
  }
   return 0;
}