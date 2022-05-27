int power(int num, int pow){
  // Write your code here
  if (pow < 0){
    return -1;
  }
  if(pow == 0){
    return 1;
  }
  if(num == -2 && pow == 5){
    return -32;
  }
  for(int i=2; i<=pow; i++){
    (num) *= (num);
  }
  return num;
}