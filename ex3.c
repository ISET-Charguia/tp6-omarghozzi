#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void remplace(char ch[], char o, char n);
void main() {
	int k, j;
	char 	ch={'d','o','n'};
	char o;
	char n;
o='0';
n='a'	;
remplace(ch,o,n);


}
void remplace(char ch[], char o, char n) {

	int i;
	char ch2[50];
	strcpy(ch2, "");
	for (i = 0; i < strlen(ch); i++) {

		if (ch[i] == o)
			strcat(ch2, n);
		else
			strcat(ch2, ch[i]);
	}
	puts(ch2);
}
