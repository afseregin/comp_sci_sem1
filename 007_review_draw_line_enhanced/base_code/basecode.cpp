// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	int length;
	char symbol;
	int x;
	int y;
	cout<<"Enter line length"<<endl;
	cin>>length;
	cout<<"Enter the symbol"<<endl;
	cin>>symbol;
	cout<<"Enter x coordinate"<<endl;
	cin>>x;
	cout<<"Enter y coordinate"<<endl;
	cin>>y;
	
	gotoxy(x,y);
	for(int i = 0;i<length;i++){
		cout<<symbol;
	}

}
