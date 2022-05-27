void swp(int* a, int* b){
  int temp = *a;
  *a = *b;
  temp = *b;
}
void sorting012Array(int arr[], int n){
	// Write your code here  
  int lo = 0, mid=0, hi = n-1;
  while(mid<=hi){
    switch(arr[mid]){
      case 0:
        swap(arr[lo++], arr[mid++]);
        break;
      case 1:
        mid++;
        break;
      case 2:
        swap(arr[mid], arr[hi--]);
        break;
    }
  }
}