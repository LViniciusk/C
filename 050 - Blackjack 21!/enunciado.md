Faça uma função que conte o valor de uma mão de blackjack.
Ela recebe um vetor de cartas e calcula usando as seguntes
regras. K, Q e J valem 10 pontos. ÁS vale 11 pontos. As
outras cartas valem seu próprio valor.
Se a soma de pontos for maior que 21, o Ás passa a valer
1 ponto, diminuindo a soma total, tentando fazer o valor
baixar para menos de 21.

No vetor de inteiros mao, o valor 1, 11, 12 e 13 são respectivamente Ás, J, Q e K.

Entrada: A entrada começa informando a quantidade de elementos do vetor e é seguida por um vetor de inteiros. A saída deve se um inteiro informando o valor da mão do blackjack.
Exemplo Entrada Saída

>>2 1 13
<<21

>>2 11 13
<<20

>>3 1 1 1
<<13

>>5 1 1 2 3 12
<<17

>>5 1 1 2 10 12
<<24