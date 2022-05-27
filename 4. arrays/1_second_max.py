def main():
  # Write your code here
  li = []
  for i in range(5):
    li.append(int(input()))
  #print(li)
  li2 = []
  for e in li:
    if e not in li2:
      li2.append(e)
  li2.sort()
  #print(li2)
  if len(li2) == 1 or len(li2) == 2:
    print(li2[0])
  else:
    print(li2[-2])
if __name__ == "__main__":
  main()