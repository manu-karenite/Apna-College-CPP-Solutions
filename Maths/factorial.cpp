#include <iostream>
#define ll long long int
using namespace std;

class factorial{
private:
	ll input;
public:
	factorial(ll input){
		this->input=input;
	}

	ll solve(ll input){
		if(input==0){
			return 1;
		}
		return input*(this->solve(input-1));
	}
	ll fact(){
		return solve(input);
	}

};

int main(){
	ll input;
	cout<<"Enter the value of number : ";
	cin>>input;
	factorial *obj = new factorial(input);
	ll answer = obj->fact();
	cout<<"The factorial of the number is : "<<answer;
	delete obj;
	return 0;
}