@005 L3 - Ladrão de Goiabas - Contando viagens usando módulo #operações


Motivação
Chico deseja coletar todas as frutas do quintal vizinho. Porém, sem que seu vizinho o veja. Para isso, Chico precisa saber exatamente quanto tempo ele irá gastar na coleta. Sabendo que você é um programador, Chico pediu sua ajuda nessa missão furtiva.

Há três tipos de frutas no quintal: bananas, goiabas e mangas. Chico tem uma cesta que pode carregar até C frutas. Ele gasta exatamente 1 minuto para ir ao quintal vizinho, encher a cesta e voltar.

Ação
Dada a capacidade C da cesta, a quantidade de frutas, calcule quantos minutos Chico precisará para coleta. Você pode considerar que há pelo menos uma fruta antes da coleta.

Entrada:
Capacidade da cesta.
Quantidade de bananas.
Quantidade de goiabas.
Quantidade de mangas.
Saída:
Duração da coleta em minutos.
Exemplos
>>>>>>>> conta exata
3
1
1
1
========
1
<<<<<<<<

>>>>>>>> sobrando duas
10
4
4
4
========
2
<<<<<<<<

>>>>>>>> sobrando uma
2
4
2
3
========
5
<<<<<<<<
Aviso:
Roubar frutas do seu vizinho é errado.

Ajuda:
calculo do piso = (b+g+m)/c

calculo de teto = piso +1

1ºPseudocódigo
leia a capacidade da cesta "c"
Leia quantidade de bananas "b" 
Leia quantidade de goiabas "g"
Leia quantidade de  mangas "m"
axiliar = (b+g+m)/c << calculo do piso
se (b+g+c) % c diferente de 0
  axiliar = piso + 1; << calcula do teto
mostra axiliar
