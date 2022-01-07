#include <iostream>
#include <cmath>
using namespace std;

class Zeroes{
private:
	int num;
public :
	Zeroes(int num){
		this->num=num;
	}

	int solve(){
		int res=0;
		for(int i=5;i<=num;i=i*5)
		{
			res+=num/i;
		}
		return res;
	}

};

int main(){
	int num;
	cout<<"Enter the n! for which you want to check zeroes : ";
	cin>>num;
	Zeroes *obj = new Zeroes(num);
	int ans=obj->solve();
	cout<<"The number of trailing zeroes in "<<num<<"! is : "<<ans;
	cout<<endl;
	delete obj;
	return 0;
}