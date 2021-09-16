/*
Union of Two Linked Lists 
Easy Accuracy: 50.08% Submissions: 20492 Points: 2
Given two linked lists, your task is to complete the function makeUnion(), that returns the union of two linked lists. This union should include all the distinct elements only.

Example 1:

Input:
L1 = 9->6->4->2->3->8
L2 = 1->2->8->6->2
Output: 1 2 3 4 6 8 9
Your Task:
The task is to complete the function makeUnion() which makes the union of the given two lists and returns the head of the new list.

Note: The new list formed should be in non-decreasing order.
*/

struct Node * makeUnion(struct Node * head1, struct Node * head2) {
    // code here
    set < int > s;
    Node * temp = head1;
    while (temp != NULL) {
        s.insert(temp -> data);
        temp = temp -> next;
    }
    temp = head2;
    while (temp != NULL) {
        s.insert(temp -> data);
        temp = temp -> next;
    }

    //distinct elements formed

    vector < int > v;
    for (auto it = s.begin(); it != s.end(); it++) {
        v.push_back( * it);
    }
    sort(v.begin(), v.end());

    //sorted here
    Node * head = NULL;
    Node * tail = NULL;

    for (int i = 0; i < v.size(); i++) {
        int dat = v[i];
        Node * newNode = new Node(dat);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail -> next = newNode;
            tail = newNode;
        }
    }
    return head;

}
