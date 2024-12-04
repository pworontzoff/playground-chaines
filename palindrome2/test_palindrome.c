#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "palindrome.h"

int main() {
	char chaine[10][25]={"ete","","a","bonjour","azerty","Mon nom","kayak","EluParCettecrapule","aa","ab"};
	int result[10]={1,1,1,0,0,1,1,1,1,0};  
    int i,ok=1;
	
	for (i=0;i<10;i++) {
		if (palindrome(chaine[i])==result[i]) {
			ok = ok && 1;
			printf("TECHIO> message --channel \"Testing Results\" 'Test %d for \"%s\" success'\n",i,chaine[i]);
		}
		else {
			ok = ok && 0;
			printf("TECHIO> message --channel \"Testing Results\" 'Error function fail Test %d for \"%s\"'\n",i,chaine[i]);
		}
	}
		
	if(ok)
		printf("TECHIO> success true\n");
	else  
		printf("TECHIO> success false\n");
	
	return 0;
}