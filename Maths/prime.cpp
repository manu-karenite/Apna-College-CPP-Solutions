#include <iostream>
#include <vector>
using namespace std;

class Prime{
	private:
	int n;
	int *arr;

public:
	Prime(int n){
		this->n=n;
		arr = new int[n+1];
		for(int i=0;i<=n;i++){
			arr[i]=0;
		}
	}

	void solve(){
		//cancel out the 0th and 1st position
		arr[0]=arr[1]=1;
		for(int i=2;i<=n;i++){
			if(arr[i]!=1){
				//start from the squares
				for(int j=i*i;j<=n;j=j+i){
					arr[j]=1;
				}
			}
		}

		//now whatever is 0 is prime
		cout<<"The prime numbers are  : ";
		for(int k=0;k<=n;k++){
			if(arr[k]==0)
				cout<<k<<" ";
		}
	}


};

int main(){
	int n;
	cout<<"Enter the upper limit of n : ";
	cin>>n;

	Prime *obj = new Prime(n);
	obj->solve();
	delete obj;
	return 0;
}