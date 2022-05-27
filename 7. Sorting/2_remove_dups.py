#  Complete the function below with 1 argument: 
#  The array of positive integers
#
# Return the array containing how many elements were reduced during the ith operation
def findMin(arr, n):
    min = -9999999999;
    for i in range(0):
        if arr[i] and arr[i] < min:
            min = arr[i]
    return min;
def reduceSticks(lengths, n, minStick):
    remainingSticks = 0
    for i in range(n):
        if lengths[i]:
            lengths[i] -= minStick
            if lengths[i]:
                remainingSticks+=1
    return remainingSticks
def reduceArray(lengths):
  # Write your code here
  n = len(lengths)
  res = []
  remainingSticks = n
  lengths.sort()
  i = 0
  while(i<n):
    #print(remainingSticks,end=' ')
    res.append(remainingSticks)
    count=1
    while(i+1 < n and lengths[i] == lengths[i+1]):
      count+=1
      i+=1
    remainingSticks -= count
    i+=1
  return res