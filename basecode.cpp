// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	char symbol;
	int height;
	cout<<"Enter a symbol for the snowflakes"<<endl;
	cin>>symbol;
	cout<<"Enter christmas tree height"<<endl;
	cin>>height;
//////////////////////////////////////////////////////////////////
	int width = height*2-1;
	for(int y=0;y<height;y++){
		for(int i=0;i<width-y-3;i++){
			cout<<" ";
		}
		for(int j=0;j<(y+1)*2-1;j++){
			cout<<"*";
		}
		cout<<""<<endl;
	}
	
////////////////////////////////////////////////////////////////////
	while(true){
		for(int i=0;i<100;i++){
		gotoxy(2,i+4);
		cout<<" "<<endl;
		gotoxy(5,i+6);
		cout<<" "<<endl;
		gotoxy(20,i+3);
		cout<<" "<<endl;
		gotoxy(13,i+7);
		cout<<" "<<endl;
		gotoxy(30,i+5);
		cout<<" "<<endl;
		gotoxy(28,i+8);
		cout<<" "<<endl;
		
		if(i==8){
			break;
		}
		
		gotoxy(2,i+5);
		cout<<symbol<<endl;
		gotoxy(5,i+7);
		cout<<symbol<<endl;
		gotoxy(20,i+4);
		cout<<symbol<<endl;
		gotoxy(13,i+8);
		cout<<symbol<<endl;
		gotoxy(30,i+6);
		cout<<symbol<<endl;
		gotoxy(28,i+9);
		cout<<symbol<<endl;
		sleep(1);
	}
	}
}
