#include<iostream>
#include<cstdio>
#include<cmath>
#include<bits/stdc++.h>
// Include headers as needed
using namespace std;
void rotate(int arr[], int n, int r){
  int ro = r%n;
  for(int k=0; k<ro; k++){
    int i=n-1, j=0;
    while(i != j){
      swap(arr[i] , arr[j]);
      i--;
    }
  }
}
int main()
{
    // Write your code here
	int t;
  	cin>>t;
	while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0; i<n;i++){
        cin>>arr[i];
      }
      int r;
      cin>>r;
      rotate(arr, n, r);
      for(int j=0;j<n; j++){
        if(j == n-1)
        	cout<<arr[j];
        else
          cout<<arr[j]<<" ";
      }
      cout<<endl;
    }
    // Return 0 to indicate normal termination
    return 0;
}