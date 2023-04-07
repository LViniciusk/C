Alfred, um comerciante que possui muita dificuldade em calcular troco teve a ideia de contratar um programador para que dado o valor de venda de um produto e o valor pago pelo cliente, fosse calculado o valor do troco caso o mesmo exista. Como Alfred é um entusiasta por tecnologia, solicitou que a solução para seu problema utilizasse um aparelho que contasse as cédulas e as moedas para que não houvessem mais erros no seu caixa. Você deverá escrever um programa para solucionar o problema de Alfred, levando em consideração que o aparelho de contagem de dinheiro que foi selecionado precisa da quantidade de cada cédula e moeda para entregar o troco. Caso o valor pago não seja suficiente, seu programa deve informar ao usuário que o valor pago é insuficiente, e quanto faltou.

Para este roteiro, seguem algumas dicas:

Para calcular o resto da divisão em C, use o operador %. Exemplo: A%B = C. 

Para encontrar a parte inteira de uma variável float, use a função floorf(). Essa função pertence à biblioteca "math.h": Exemplo floorf(3.56) irá retornar 3.00; 

Exemplo de Entradas 1:
Digite o total da compra: R$ 137.53
Digite o valor pago pelo cliente: R$ 150.00
Exemplo de Saída 1:
Cédulas de R$100.00: 0
Cédulas de R$50.00: 0
Cédulas de R$20.00: 0
Cédulas de R$10.00: 1
Cédulas de R$5.00: 0
Cédulas de R$2.00: 1
Moeda de R$1.00: 0
Moeda de R$0.50: 0
Moeda de R$0.25: 1
Moeda de R$0.10: 2
Moeda de R$0.05: 0
Moeda de R$0.01: 2
Exemplo de Entradas 2:
Digite o total da compra: R$ 137.53
Digite o valor pago pelo cliente: R$ 130.00
Exemplo de Saída 2:
Valor Insuficiente, faltaram R$ 7.53