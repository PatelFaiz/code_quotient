# Stack has already defined functions push(j),pop(),isEmpty(),isFull()
class Stack:
    def __init__(self):
        self.top = -1
        self.stack=[]
    def push(self,j):
        if self.isFull() :
            return
        self.top = self.top + 1
        self.stack.append(j)
    def pop(self):
        if(self.top == -1):
            return -1
        self.top = self.top-1;
        return self.stack.pop()
    def isEmpty(self):
        if(self.top == -1):
            return True
        return False
    def isFull(self):
        if(self.top == sys.maxsize):
            return True
        return False
def evalPostfix(stack,exp):
  # Write your code here
  stack = Stack()
  for i in exp:
    if i.isdigit(): 
      stack.push(int(i)) 
    else: 
      val2 = stack.pop()
      val1 = stack.pop()
      if i=='+':
        stack.push(val1 + val2)
      if i == '-':
        stack.push(val1 - val2)
      if i == '*':
        stack.push(val1 * val2)
      if i == '/':
        stack.push(val1 // val2)
      if i == '^':
        stack.push(val1 ** val2)
  return stack.pop()