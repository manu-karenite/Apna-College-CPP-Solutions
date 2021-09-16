/*
Given a Matrix mat of N*N size, the task is to complete the function constructLinkedMatrix(), that constructs a 2D linked list representation of the given matrix.

Input : 2D matrix 
1 2 3
4 5 6
7 8 9

Output :
1 -> 2 -> 3 -> NULL
|    |    |
v    v    v
4 -> 5 -> 6 -> NULL
|    |    |
v    v    v
7 -> 8 -> 9 -> NULL
|    |    |
v    v    v
NULL NULL NULL
Input:
The fuction takes 2 argument as input, first the 2D matrix mat[][] and second an integer variable N, denoting the size of the matrix.
There will be T test cases and for each test case the function will be called separately.

Output:
The function must return the reference pointer to the head of the linked list.
*/
// n is the size of the matrix
// function must return the pointer to the first element 
// of the in linked list i.e. that should be the element at arr[0][0]
pair < Node * , Node * > createLL(int dat, Node * head, Node * tail) {
  Node * newNode = new Node(dat);
  pair < Node * , Node * > p;
  if (head == NULL) {
    head = newNode;
    tail = newNode;
    p.first = head;
    p.second = tail;
    return p;
  }
  tail -> right = newNode;
  tail = newNode;
  p.first = head;
  p.second = tail;
  return p;

}
Node * constructLinkedMatrix(int mat[MAX][MAX], int n) {
  // code here
  //crea a right edges matrix
  //create HZ LL first
  vector < pair < Node * , Node * >> v;
  for (int i = 0; i < n; i++) {
    Node * tempHead = NULL;
    Node * tempTail = NULL;
    pair < Node * , Node * > p;
    p.first = tempHead;
    p.second = tempTail;

    for (int j = 0; j < n; j++) {
      //cout<<mat[i][j]<<" ";
      p = createLL(mat[i][j], p.first, p.second);
    }
    //LL is created, now save head-tail in vactor
    pair < Node * , Node * > p1;
    p1.first = p.first;
    p1.second = p.second;
    v.push_back(p1);
  }

  //we have all the heads of RtoL LL in vector as <head,tail>
  for (int i = 0; i < v.size() - 1; i++) {
    Node * firstLL = v[i].first;
    Node * secondLL = v[i + 1].first;

    //now we need to make down connection fo every subsequent elements

    Node * temp1 = firstLL;
    Node * temp2 = secondLL;
    while (temp1 != NULL && temp2 != NULL) {
      //make connections
      temp1 -> down = temp2;
      temp1 = temp1 -> right;
      temp2 = temp2 -> right;
    }
  }
  //i think we are done now
  return v[0].first;

}
