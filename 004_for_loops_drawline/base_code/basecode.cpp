// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	cout<<"Enter the symbol"<<endl;
	char symbol;
	cin>>symbol;
	
	cout<<"Enter line length"<<endl;
	int length;
	cin>>length;
	
	cout<<"Horizontal or vertical?(h/v)"<<endl;
	char hv;
	cin>>hv;
	
	if (hv=='h'){
		
	int i;
	while(i<length){
		cout<<symbol;
		i++;
	}
	}
	
	else if (hv=='v'){
		
	int i;
	while(i<length){
		cout<<symbol<<endl;
		i++;
	}
	}
}
