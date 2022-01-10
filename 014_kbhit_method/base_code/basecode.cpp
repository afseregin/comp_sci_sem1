// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	char symbol = '$';
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
	////////////
	while(true){
	
	cout<<""<<endl;
	cout<<"Enter ‘q’ to quit or any other key to get another random number"<<endl;
	char answer = getch();
	if (answer=='q'){
		break;
	}
	else if(answer==' '){
		while(kbhit()==0){
	gotoxy(79,6);
	cout<<random(99)<<endl;
	}
	}
	}
}