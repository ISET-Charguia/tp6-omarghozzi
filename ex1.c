#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void conj(char ch[]);
void prul(char mot[]);
void main()
{
    char verb[100];
    char mot[50];
   printf("donner une chaine:");
   scanf("%s",verb);
   conj(verb);
   printf("donner un mot ");
   scanf("%s",mot);
   prul(mot);
}
void conj(char VERB[])
{
int j;
char ch2[100];
 j=strlen(VERB);
 if ((VERB[j-2]!='e') || (VERB[j-1]!='r'))
      puts("\aCe n'est pas un verbe du premier groupe.!");
 else
     {

      VERB[j-2]='\0';

      ch2[0]='\0';
      strcat(ch2, "je ");
      strcat(ch2, VERB);
      strcat(ch2, "e");
      puts(ch2);
        ch2[0]='\0';
      strcat(ch2, "tu ");
      strcat(ch2, VERB);
      strcat(ch2, "es");
      puts(ch2);
       ch2[0]='\0';
      strcat(ch2, "il ");
      strcat(ch2, VERB);
      strcat(ch2, "e");
      puts(ch2);
       ch2[0]='\0';
      strcat(ch2, "nous ");
      strcat(ch2, VERB);
      strcat(ch2, "ons");
      puts(ch2);
       ch2[0]='\0';
      strcat(ch2, "vous ");
      strcat(ch2, VERB);
      strcat(ch2, "ez");
      puts(ch2);
      ch2[0]='\0';
      strcat(ch2, "ils ");
      strcat(ch2, VERB);
      strcat(ch2, "ent");
      puts(ch2);
     }
}
void prul(char mot[])
{
	int i;
	i=strlen(mot);
	if((mot[i]!='s')||(mot[i]!='x')||(mot[i]!='z'))
{strcat(mot,'s');
	puts(mot);}
}
