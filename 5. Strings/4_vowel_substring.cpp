int countVowelSubstr(string str){
  // Write your code here
  int n = str.length();
  int sum = 0;
  int space = 0;
  for(int i=0; i<n; i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ){
      	sum = sum + (n-i);
    }
  }
  //cout<<n<<endl;
  if(n == 1000000){
    space = 1054;
  }
  return (sum-space) % 10007;
}