#include <stdio.h>
#include <stdlib.h>

/* COMPARA��O DE INTEIROS SEM USAR UMA ESTRUTURA DE DECIS�O COMO O IF/CASE/?. OBT�M-SE A F�RMULA ABAIXO, PARTINDO DO PRINC�PIO DE QUE:

    Q = (A*S)+(B*~S) => IF S THEN A ELSE B

   TEMOS ENT�O

    R = (C*T)+(Q*~T) => IF T THEN C ELSE Q

   PARA ASSIM CHEGARMOS EM

    R = (C*T)+(((A*S)+(B*~S))*~T) => IF S THEN C ELSE IF A THEN S ELSE

*/


int main(){
    int x = 12;
    int y = 12;
/*  DECIS�O REPRESENTADA COM IF

    if(x < y)
        printf("%d < %d", x, y);
    else if(x > y)
        printf("%d > %d", x, y);
    else
        printf("%d = %d", x, y);

    DECIS�O REPRESENTADA COM OPERADOR TERN�RIO (?:)

    (x < y) ? printf("%d < %d", x, y) : x > y ? printf("%d > %d", x, y) : printf("%d = %d", x, y);

    MESMO IF REPRESENTADO EM EXPRESS�O BOOLEANA
*/
    printf("%d %c %d", x,((60*(x<y))+(((62*(x>y))+(61*!(x>y)))*!(x<y))),y);
}
