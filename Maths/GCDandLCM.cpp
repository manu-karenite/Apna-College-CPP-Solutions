#include <iostream>
using namespace std;

class GCDandLCM{
	private:
		int a,b,GCD,LCM;
	public:
		GCDandLCM(){
			a=b=GCD=LCM=0;
		}
		void readInput(){
			cout<<"Enter the values of a : ";
			cin>>a;
			cout<<"Enter the values of b : ";
			cin>>b;
		}
		void solveGCD(){
			int m=a;
			int n=b;
			while(m!=n){
				if(m>n) m=m-n;
				else n=n-m;
			}
			GCD=m;
		}
		void solveLCM(){
			LCM=(a*b)/GCD;
		}

		void printData(){
			cout<<"GCD is : "<<GCD<<endl;
			cout<<"LCM is : "<<LCM<<endl;
		}
		
};

int main(){
	GCDandLCM *obj = new GCDandLCM();
	obj->readInput();
	obj->solveGCD();
	obj->solveLCM();
	obj->printData();
	delete obj;
	return 0;
}