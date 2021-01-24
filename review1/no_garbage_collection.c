#include <stdlib.h>

int main(){
	for(int i=0; i<100000000; i++){
		malloc(50);
	}
}
