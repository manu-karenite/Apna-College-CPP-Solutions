
// Reverse First K elements of Queue
// Easy Accuracy: 57.92% Submissions: 36576 Points: 2

// Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.

// Only following standard operations are allowed on queue.

//     enqueue(x) : Add an item x to rear of queue
//     dequeue() : Remove an item from front of queue
//     size() : Returns number of elements in queue.
//     front() : Finds front item.


queue < int > modifyQueue(queue < int > q, int k) {
  // add code here.
  stack < int > s;
  for (int i = 0; i < k; i++) {
    s.push(q.front());
    q.pop();
  }
  //another quuee
  queue < int > q1;
  while (q.empty() == false) {
    q1.push(q.front());
    q.pop();
  }

  //q is now empty
  while (s.empty() == false) {
    q.push(s.top());
    s.pop();
  }
  while (q1.empty() == false) {
    q.push(q1.front());
    q1.pop();
  }
  return q;
}
