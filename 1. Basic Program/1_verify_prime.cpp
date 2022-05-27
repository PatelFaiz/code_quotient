/*
 * Complete the function 'verifyPrime'
 * @params
 *  n ->number which is to be checked from primality test
 *
 * @return
 *   true if the number is a prime number else false
 */
bool verifyPrime(int n){
  // Write your code here
  if(n == 0 || n == 1){
    return false;
  }
  for(int i=2; i<=sqrt(n); i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}