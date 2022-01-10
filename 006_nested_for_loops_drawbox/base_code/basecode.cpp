// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	int height;
	int width;
	char symbol;
	cout<<"Enter box height"<<endl;
	cin>>height;
	cout<<"Enter box width"<<endl;
	cin>>width;
	cout<<"Enter the symbol"<<endl;
	cin>>symbol;
	
	for(int y=0; y<height; y++){
		for(int x=0; x<width; x++){
			cout<<symbol;
		}
		cout<<""<<endl;
	}

}
