#include <bits/stdc++.h>
using namespace std;
void solve(int index,vector<int> v,int n,vector<int> out){
    
    if(index==n){
        //print the first element
        for(int i=0;i<out.size();i++){
            cout<<out.at(i)<<" ";
        }
        if(out.size()==0){
            cout<<"{ }";

        }
        cout<<endl;
        return;
    }
    solve(index+1,v,n,out);
    out.push_back(v.at(index));
    solve(index+1,v,n,out);

}
int main() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    //input completed
    vector<int> out;
    solve(0,v,n,out);
    return 0;
}