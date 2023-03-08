/*No flm do processamento desse código o valor da varlável SOMA será 91.
PE
Mas por que o valor da variável é igual a 91?
Bem, ao observar o código podemos ver que se trata de uma soma de números inteiros (Int), e ele diz que enquanto K for menor que o INDICE o programa deverá fazer esses cálculos e ao flm o resultado da SOMA é 91.
O "enquanto" se trata de uma estrutura de repetição utilizada para comparar dados e refazer as operações até que o requisito seja alcançado, normalmente é visto como "whlle" ou "do-whlle". Essa estrutura de repetição é o ideal para esses casos onde devemos Ir acrescentando valores a uma varlável que se torna dinâmica.
Um exemplo do funcionamento desse código na lInguagem de programação C é: */

#include <stdio.h>
int main ()
{
int INDICE = 13, SOMA = 0, K = 0;
while(K<INDICE); {

K = K+1;
SOMA = SOMA + K ;
}

printf("%d",SOMA);
return 0;
}