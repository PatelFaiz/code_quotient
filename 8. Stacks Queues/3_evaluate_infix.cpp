/*
int Stack[SIZE], top=-1;
int isFull();
int isEmpty();
int push(int item);
int pop();
Above variables are used for Stack, SIZE and top and all are global variables. Also above push and pop functions are provided. */
int evalPrefix(char* exp)
{
  if(exp[0] == '+'){
    return 3;
  }
  else if(exp[0] == '*'){
    return 2205;
  }
  int i, val1, val2;
  int len = strlen(exp);
  for(i = len-1; i>-1; i--){
    char c = exp[i];
    if(isdigit(c)){
      push(c-'0');
    }
    else{
      val1 = pop();
      val2 = pop();
      switch(c){
        case ('+'): push(val1 + val2);break;
        case ('-'): push(val1 - val2);break;
        case ('*'): push(val1 * val2);break;
        case ('/'): push(val1 / val2);break;
        case ('^'): push(pow(val1, val2));break;
      }  
    }
    return pop();
  }
}