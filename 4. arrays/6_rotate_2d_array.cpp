def rotate(mat, n):
  new_mat = []
  i=n-1
  while i>=0:
    x = n-1
    row = []
    while(x>=0):
      num = mat[x][n-i-1]
      row.append(num)
      x-=1
    new_mat.append(row)
    i-=1
  for i in range(n):
    for j in range(n):
      if j==n-1:
        print(new_mat[i][j])
      else:
        print(new_mat[i][j], end=" ")
    #print()
def main():
  # Write your code here
  t = int(input())
  while t:
    n = int(input())
    mat = []
    for i in range(n):
      li = [int(x) for x in input().split(" ")]
      mat.append(li)
    rotate(mat, n)
    print()
    #for i in mat:
      #print(i)
      #print()
    t-=1
if __name__ == "__main__":
  main()