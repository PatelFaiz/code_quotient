void decimalToBinary(int n)
{
  //Write your Code here
  int arr[32];
  int i=0;
  while(n>0){
    arr[i] = n%2;
	n = n/2;
    i++;
  }
  for(int j=i-1; j>=0; j--){
  	cout<<arr[j];
  }
  // Method 2
  //vector<int> v;
  //while(n>0){
  //  v.push_back(n%2);
  //  n = n/2;
  //}
  //vector<int>::iterator it;
  //for(it = v.end(); it!=v.begin(); it--){
  //  cout<<*it;
  //}
}