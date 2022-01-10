// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	for(int x = 0; x<5; x++){
	drawbox(10,10+x*5,10,4,'$');
	}
	
	gotoxy(200,200);
}
