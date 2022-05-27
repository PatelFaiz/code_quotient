# Return true/1 if brackets are balanced
def areBracketsBalanced(expr):
  # Write your code here
  stack = []
  for char in expr:
    if char in ["{", "(", "["]:
      stack.append(char)
    elif char in ['}', ')', ']']:
      if not stack:
        return False
      current = stack.pop()
      if current == '(' and char != ')':
        return False
      if current == '{' and char != '}':
        return False
      if current == '[' and char != ']':
        return False
  if stack:
    return False
  return True