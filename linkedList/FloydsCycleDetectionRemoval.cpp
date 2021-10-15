
// Remove loop in Linked List

// Given a linked list of N nodes such that it may contain a loop.

//     A loop here means that the last node of the link list is connected to the node at position X. If the link list does not have any loop, X=0.

// Remove the loop from the linked list, if it is present.  



pair < bool, pair < Node * , Node * >> findLoop(Node * hare, Node * tortoise) {
  while (hare != NULL && hare -> next != NULL) {
    tortoise = tortoise -> next;
    hare = hare -> next -> next;
    if (tortoise == hare) {
      pair < bool, pair < Node * , Node * >> p;
      p.first = true;
      p.second.first = hare;
      p.second.second = tortoise;
      return p;
    }

  }
  pair < bool, pair < Node * , Node * >> p;
  p.first = false;
  p.second.first = NULL;
  p.second.second = NULL;
  return p;

}
void removeLoop(Node * head) {
  // code here
  // just remove the loop without losing any nodes
  //first get whether there is any loop or not
  Node * hare = head;
  Node * tortoise = head;
  //cout<<hare<<" "<<tortoise<<endl;
  pair < bool, pair < Node * , Node * >> ans = findLoop(hare, tortoise);

  if (ans.first) {
    //then only do something
    //send back the hare to head;
    if (ans.second.first == head) {
      //pushing to head won't slove the problem
      Node * check = head;
      Node * move = head;
      while (move -> next != head) {
        move = move -> next;
      }
      //now move's next is head;
      move -> next = NULL;
      return;
    }
    hare = head;
    tortoise = ans.second.second;
    // cout<<hare<<" "<<tortoise<<endl;
    hare = head;
    //cout<<hare<<" "<<tortoise<<endl;
    while (hare -> next != tortoise -> next) {
      hare = hare -> next;
      tortoise = tortoise -> next;
    }
    //now both points to initial node
    tortoise -> next = NULL;
  }

}
