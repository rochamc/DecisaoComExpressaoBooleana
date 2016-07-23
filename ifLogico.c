#include <stdio.h>
#include <stdlib.h>

/* COMPARAÇÃO DE INTEIROS SEM USAR UMA ESTRUTURA DE DECISÃO COMO O IF/CASE/?. OBTÉM-SE A FÓRMULA ABAIXO, PARTINDO DO PRINCÍPIO DE QUE:

    Q = (A*S)+(B*~S) => IF S THEN A ELSE B

   TEMOS ENTÃO

    R = (C*T)+(Q*~T) => IF T THEN C ELSE Q

   PARA ASSIM CHEGARMOS EM

    R = (C*T)+(((A*S)+(B*~S))*~T) => IF S THEN C ELSE IF A THEN S ELSE

*/


int main(){
    int x = 12;
    int y = 12;
/*  DECISÃO REPRESENTADA COM IF

    if(x < y)
        printf("%d < %d", x, y);
    else if(x > y)
        printf("%d > %d", x, y);
    else
        printf("%d = %d", x, y);

    DECISÃO REPRESENTADA COM OPERADOR TERNÁRIO (?:)

    (x < y) ? printf("%d < %d", x, y) : x > y ? printf("%d > %d", x, y) : printf("%d = %d", x, y);

    MESMO IF REPRESENTADO EM EXPRESSÃO BOOLEANA
*/
    printf("%d %c %d", x,((60*(x<y))+(((62*(x>y))+(61*!(x>y)))*!(x<y))),y);
}
