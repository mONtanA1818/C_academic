#include <stdio.h>
#include <stdlib.h>
int MyLen(char *a);
int main(){
   char c[100];
//    scanf("%s",c);
	printf("please input str\n");
    fgets(c, sizeof(c), stdin);
   int num=MyLen(c);
   printf("The len is %d",num);
}


int MyLen(char *a){
    int i;
    for ( i = 0; a[i]!='\0'; i++);
    i--; 
    return i;
}
