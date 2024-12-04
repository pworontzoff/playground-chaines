#include <stdio.h>
#include <stdlib.h>
#include "strlength.h"

int main() {
	char chaine[5][20]={"Bonjour","","123456789","a","azerty"};
	int result[5]={7,0,9,1,6};  
    int i,ok=1;
	
	for (i=0;i<5;i++) {
		//printf("%s - %d - (%d)\n",strlength(chaine[i]),chaine[i],result[i]);
		if (strlength(chaine[i])==result[i]) {
			ok = ok && 1;
			printf("TECHIO> message --channel \"Testing Results\" 'Test %d for \"%s\" success'\n",i,chaine[i]);
		}
		else {
			ok = ok && 0;
			printf("TECHIO> message --channel \"Testing Results\" 'Error function fail Test %d for \"%s\"'\n",i,chaine[i]);
		}
	}
		
	if(ok) {
		printf("TECHIO> success true\n");
		return 1;
	}
	else {  
		printf("TECHIO> success false\n");
		return 0;
	}
}