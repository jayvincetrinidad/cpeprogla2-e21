// Trinidad, Jay Vince C.

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

double problem1(double num){
	cout<<"Number to round off: ";
	cin>>num;
	cout<<" THE Rounded value: "<<round(num)<<"\n\n";
cout<<"+++++++++++++++++++++++++++++++++++++++++++++"<<endl;
}


void problem2(){
	int uniques [10];
	int max = 20;
	int min = 1;
	int num1; 
	bool check = true; 
	
	srand(time(NULL)); 
	cout << "\n10 DIFFERENT NUMBERS: ";	
	
	for (int i=0;i<10;i++){
    	
	do{
    	num1=rand()%max+min;
    	check = true;
   		 for (int j=0;j<i;j++)
   		     if (num1 == uniques[j]) {
           	 check = false; 
             break; 
        }
    } while (!check); 
	uniques[i]=num1;
	cout << num1 << " ";
	}
	cout<<"\n\n+++++++++++++++++++++++++++++++++++++++++++++"<<endl;
}


void call_by_value(){
	int n, result=1;
	cout<<"\n\nFactorial of the number: ";
	cin>>n;
	for(int i=1;i<n+1;i++) {
		if(n==0){
		cout<<" Result: 1\n";}
		else result=result*i;
	}
	cout<<"Answer: "<<result<<endl;
}

main(){
	double num;
	int result;
	problem1(num);
	problem2();
	call_by_value();
}






