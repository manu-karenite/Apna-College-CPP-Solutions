
// Evaluation of Postfix Expression
// Easy Accuracy: 53.28% Submissions: 24621 Points: 2

// Given string S representing a postfix expression, the task is to evaluate the expression and find the final value.
// Operators will only include the basic arithmetic operators like *, /, + and -.

int solve(char op, int f, int l) {
  if (op == '+')
    return f + l;
  else if (op == '-')
    return f - l;
  else if (op == '*')
    return f * l;
  else if (op == '/')
    return f / l;
}
int evaluatePostfix(string S) {
  // Your code here
  stack < int > s;
  for (int i = 0; i < S.size(); i++) {
    char l = S[i];
    //cout<<(int)l<<" ";
    int num = l - 48;
    if (num >= 0 && num <= 9) {
      s.push(num);

    } else {
      //must be an operator
      //get the last two chars
      int a = s.top();
      s.pop();
      int b = s.top();
      s.pop();
      int evaluated = solve(l, b, a);
      //ans+=evaluated;
      s.push(evaluated);
    }

  }
  return s.top();
  //return -1;
}
