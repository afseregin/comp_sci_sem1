// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	int height;
	int width;
	char symbol;
	int xcor;
	int ycor;
	cout<<"Enter box height"<<endl;
	cin>>height;
	cout<<"Enter box width"<<endl;
	cin>>width;
	cout<<"Enter the symbol"<<endl;
	cin>>symbol;
	cout<<"Enter the x coordinate"<<endl;
	cin>>xcor;
	cout<<"Enter the y coordinate"<<endl;
	cin>>ycor;
	
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
	

}
