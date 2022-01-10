// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	int x;
	int y;
	char operation;
	char symbol;
	cout<<"Enter first value"<<endl;
	cin >>x;
	cout<<"Enter second value"<<endl;
	cin >>y;
	cout<<"Enter operation"<<endl;
	cin>>operation;
	cout<<"Enter the symbol"<<endl;
	cin>>symbol;
	/////////////
	int xcor = 70;
	int ycor = 10;
	int height = 9;
	int width = 20;
	gotoxy(xcor,ycor);
	for(int x=0; x<width; x++){
		cout<<symbol;
	}
	gotoxy(xcor,ycor+1);
	for(int x=0; x<height-1; x++){
		cout<<symbol;
		for(int y = 0;y<width-2;y++){
		cout<<" ";
		}
		cout<<symbol<<endl;
		gotoxy(xcor,ycor+x);
	}
	for(int x=0; x<width; x++){
		cout<<symbol;
	}
//////////////
	gotoxy(76,7);
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
///////////////////////////////



}
