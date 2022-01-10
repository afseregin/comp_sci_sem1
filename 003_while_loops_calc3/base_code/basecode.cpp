// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	
	while(1==1){
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
		cout<<x+y<<endl;
	}
		else if(operation=='-'){
		cout<<x-y<<endl;
	}
		else if(operation=='*'){
		cout<<x*y<<endl;
	}
		else if(operation=='/'){
		cout<<x/y<<endl;
	}
	cout<<"Do you want to continue using the calculator? Enter q to quit"<<endl;
	char answer = 0;
	cin>>answer;
	if (answer=='q'){
		break;
	}
	else{
	}
}
}
