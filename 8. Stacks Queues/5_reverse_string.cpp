/* class CQStack{
    public:
        CQStack(int s); // constructor
        void push(int j); // Add element on the top of the stack
        int pop();  // Remove element from the top of the stack
        bool isEmpty(); // Return true is stack is empty
        bool isFull(); // Return true if stack is full
    };
    CQStack class already defined as per the above blueprint
*/
string reverseString(CQStack *stack,string s){
  int n = s.length();
    for(int i=0; i<n; i++){
      stack->push(s[i]);
    }
  string res="";
  for(int i =0; i<n; i++){
    res.push_back(stack->pop());
  }
  return res;
}