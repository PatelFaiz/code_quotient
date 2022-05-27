void moveElements(int arr[], int n){ 
  // Write your code here
  int j = 0;
  int res[n];
  for(int i=0; i<n; i++){
    if(arr[i]>=0){
      res[j++] = arr[i];
    }
  }
  for(int i = 0; i<n; i++){
    if(arr[i]<0){
      res[j++] = arr[i];
    }
  }
  for(int i =0; i<n; i++){
    arr[i] = res[i];
  }
}