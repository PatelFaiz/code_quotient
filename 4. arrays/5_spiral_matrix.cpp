void printSpiral(int a[ROWS][COLS], int r, int c){
  // Write your code here
  int row_start = 0, row_end = r-1;
  int col_start = 0, col_end = c-1;
  int dir =0;
  while(row_start <= row_end && col_start <= col_end){
    // For first row:
    if(dir == 0){
      for(int col = col_start; col<=col_end; col++){
        cout<<a[row_start][col]<<endl;
      }
      row_start++;
    }
    //for last column:
    if(dir == 1){
      for(int row=row_start; row<=row_end; row++){
        cout<<a[row][col_end]<<endl;
      }
      col_end--;
    }
    //for last row:
    if(dir == 2){
      for(int col= col_end; col>=col_start; col--){
        cout<<a[row_end][col]<<endl;
      }
      row_end--;
    }
    //First column:
    if(dir == 3){
      for(int row=row_end; row>=row_start; row--){
        cout<<a[row][col_start]<<endl;
      }
      col_start++;
    }
    dir = (dir+1)%4;
  }
}