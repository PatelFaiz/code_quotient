def countWords(string):
  # Write your code here
  li = string.split(" ");
  #print(li)
  sum = 0
  for i in li:
    if i != "":
      sum+=1
  return sum