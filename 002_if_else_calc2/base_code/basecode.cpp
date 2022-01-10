// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	int x = 0;
	int y = 0;
	char operation = 0;
	cout<<"Enter first value"<<endl;
	cin >>x;
	cout<<"Enter second value"<<endl;
	cin >>y;
	cout<<"Enter operation"<<endl;
	cin>>operation;
	cout << x<<operation<<y<<"=";
	if(operation=='+'){
		cout<<x+y;
	}
		else if(operation=='-'){
		cout<<x-y;
	}
		else if(operation=='*'){
		cout<<x*y;
	}
		else if(operation=='/'){
		cout<<x/y;
	}

}
