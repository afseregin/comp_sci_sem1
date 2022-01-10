// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	int height;
	int width;
	char symbol;
	int x;
	int y;
	cout<<"Enter box height"<<endl;
	cin>>height;
	cout<<"Enter box width"<<endl;
	cin>>width;
	cout<<"Enter the symbol"<<endl;
	cin>>symbol;
	cout<<"Enter x coordinate"<<endl;
	cin>>x;
	cout<<"Enter y coordinate"<<endl;
	cin>>y;
	
	gotoxy(x,y);
	for(int y=0; y<height; y++){
		for(int x=0; x<width; x++){
			cout<<symbol;
		}
		cout<<""<<endl;
	}

}
