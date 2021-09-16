/*
linked list of strings forms a palindrome 
Easy Accuracy: 51.31% Submissions: 13997 Points: 2
Given a linked list of strings having n nodes check to see whether the combined string formed is palindrome or not. 

Input:
You have to complete the method which takes one argument: the head of the linked list . You should not read any input from stdin/console.. There are multiple test cases. For each test case, this method will be called individually.

Output:
Your function should return True if the combined string is pallindrome else it should return False.
*/
bool compute(Node * root) {
  //Your code goes here
  string word = "";
  Node * temp = root;
  while (temp != NULL) {
    word = word + temp -> data;
    temp = temp -> next;
  }
  //now we have got the word
  //check for the base cases
  int len = word.size();
  if (len == 0 || len == 1)
    return true;
  //otherwise
  int i = 0;
  int j = len - 1;
  while (i < j) {
    if (word[i] != word[j]) {
      return false;
    }
    i++;
    j--;

  }
  return true;

}
