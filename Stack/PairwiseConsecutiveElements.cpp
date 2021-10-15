// Pairwise Consecutive Elements
// Basic Accuracy: 50.1% Submissions: 9988 Points: 1

// Given a stack of integers of size N, your task is to complete the function pairWiseConsecutive(), that checks whether numbers in the stack are pairwise consecutive or not. The pairs  can be increasing or decreasing, and if the stack has an odd number of elements, the element at the top is left out of a pair. The function should retain the original stack content.

bool pairWiseConsecutive(stack < int > s) {
  //Code here
  stack < int > s1 = s;
  //shallow copy created
  if (s.size() % 2 != 0) {
    s1.pop();
  }
  //materialized
  while (s1.empty() == false) {
    int a = s1.top();
    s1.pop();
    int b = s1.top();
    s1.pop();

    //now check for consecutiveness
    if (b == a + 1 || b == a - 1) //in either ways
      continue;
    else
      return false;
  }
  //otherwise
  return true;
}
