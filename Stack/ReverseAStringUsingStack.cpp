// You are given a string S, the task is to reverse the string using stack.

// Example 1:

// Input: S="GeeksforGeeks"
// Output: skeeGrofskeeG

char* reverse(char *S, int len)
{
   
   stack<char> s;
   for(int i=0;i<len;i++)
    s.push(S[i]);

    int j=0;
    while(s.empty()==false)
    {
        S[j++]=s.top();
        s.pop();
    }
    return S;
    
}
