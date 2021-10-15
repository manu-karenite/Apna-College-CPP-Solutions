
// Preorder Traversal
// Basic Accuracy: 59.04% Submissions: 66393 Points: 1

// Given a binary tree, find its preorder traversal.

vector < int > preorder(Node * root) {
  // Your code here
  vector < int > answer;

  if (root == NULL)
    return answer;

  //means root is not null and we will have the vector

  stack < Node * > s;
  s.push(root);
  while (s.empty() == false) {
    Node * a = s.top();
    answer.push_back(a -> data);
    s.pop();

    if (a -> right != NULL)
      s.push(a -> right);
    if (a -> left != NULL)
      s.push(a -> left);

  }
  return answer;

}
