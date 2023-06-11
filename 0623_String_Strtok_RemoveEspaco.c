#include <string.h>
#include <stdio.h>
int main () {
    char str[80] = "Esse eh - www.google.com - o google"; 
    const char s[2] = " "; //escolheu o - para quebrar o texto, vai separar ele //pode ser só char s[2]="-";
    char *token; //token = pedacinhos

 /* pega o primeiro token */
    token = strtok(str, s);

 /* anda entre os outros tokens */
    while(token != NULL) { //quando termina de consumir o token, fica tudo nulo
        printf( " %s\n", token );

        token = strtok(NULL, s);
    }
 return(0);
}
