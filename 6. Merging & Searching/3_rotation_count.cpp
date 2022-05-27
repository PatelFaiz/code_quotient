int rotationCount(int a[], int size){
  // Write your code here
  int a2[size];
  for(int i=0; i<size; i++){
    a2[i] = a[i];
  }
  sort(a2, a2+size);
  int i=0;
  while(i<size){
    if(a[i] == a2[0]){
      return i;
    }
    i++;
  }
}