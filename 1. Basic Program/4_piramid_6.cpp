#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int factorial(int n){
  int fact = 1;
  for(int i=2; i<=n; i++){
    fact *= i;
  }
  return fact;
}
int combination(int n, int r){
  return factorial(n)/(factorial(r) * factorial(n-r));
}
int main()
{
  int n;
  cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=i; j>=1; j--){
      cout<<j;
    }
    for(int k=2; k<=i; k++){
      cout<<k;
    }
    cout<<endl;
  }
   return 0;
}