#include <string.h>
#include <stdio.h>
int main () {
    char str[80] = "Esse eh - www.google.com - o google"; 
    const char s[3] = " -"; //escolheu o - para quebrar o texto, vai separar ele //pode ser só char s[2]="-";
    //ele tira os espaços e traços, mas não espaço e sequencia traço
    char *token; //token = pedacinhos

 /* pega o primeiro token */
    token = strtok(str, s);

 /* anda nos tokens */
    while(token != NULL) { //quando termina de consumir o token, fica tudo nulo
        printf( " %s ", token );

        token = strtok(NULL, s);
    }
 return 0;
}
