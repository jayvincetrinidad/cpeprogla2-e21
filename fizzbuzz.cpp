// Trinidad, Jay Vince C.
#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
	int n;
	for (int n=1; n<=100; n++){
		
		if (n%3==0 && n%5==0){
			cout<<"FizzBuzz"<<endl;
		}
		else if (n%3==0){	
			cout<<"Fizz"<<endl;
		}	
		else if (n%5==0)
		{
			cout<<"buzz"<<endl;
		}
		else{
			cout<<n<<endl;
		}
	
			
	}
		
		
}
