int maxToys(int cost[], int n, int X){
	// Write your code here
  int remain = X;
  int count = 0;
  sort(cost, cost+n);
  for(int i=0; i<n; i++){
    if(remain < cost[i])
      break;
    remain -= cost[i];
    count++;
  }
  return count;
}