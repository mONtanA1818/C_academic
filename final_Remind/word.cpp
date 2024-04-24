#include <stdio.h>
                         
int main() {                                      
	char a[1000];
	gets(a);                                              
	int word = 0;                                        
	for (char *p = a; *p != '\0'; p++) {          
		if (*p == 32) {              
			word++;            
		};                                 
	};                               
	printf("%d words", word + 1);
	return 0;              
};                     