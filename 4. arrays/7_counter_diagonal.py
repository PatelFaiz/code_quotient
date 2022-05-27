#  Complete the 'counterDiagnol' function below.
#  Print the counter diagnol traversal of the matrix , seperated by space
#  @params
#    matrix -> square matrix of size nXn 
#    n -> integer denoting size of square matrix
def counterDiagnol(matrix,n):
  # Write your code here
  for line in range(1, (2*n)):
    start_col = max(0, line - n)
    count = min(line, (n - start_col), n)
    li = []
    for j in range(0, count):
      li.append(matrix[min(n, line) - j - 1][start_col + j])
    for j in range(count-1, -1, -1):
      print(li[j], end=" ")