# MEGA SENA
## Descrição do Problema

  O Paulo gosta de apostar na Mega Sena, mas não gosta de ficar conferindo os jogos que faz. Ele gosta de apostar em mais do que 6 dezenas no mesmo bilhete para maximizar suas chances de acertar a sena. Então ele precisa de um programa que faça a conferência por ele e indique quantas quadras, quinas e a sena que ele acertou em cada aposta. Para apostar na Mega Sena deve-se pegar um cartão de apostas e marcar ao menos 6 dezenas e no máximo 15 (uma dezena é um valor entre 1 e 60). Marcando mais dezenas você concorre com todas as combinações de 6 dezenas possiveis formadas com as dezenas marcadas. Não é possível marcar marcar, nem sortear, dezenas repetidas no mesmo cartão. Não é possível ganhar mais de uma combinação de 6 dezenas.

## Entrada

  A entrada é composta por por várias linhas. A primeira linha contém 6 números inteiros, sem repetição, que foram os números sorteados. A seguir uma linha com um inteiro N (1 <= N <= 100) que indica a quantidade de jogos que Paulo fez. As próximas N linhas contêm, cada uma, uma aposta feita por Paulo. A aposta deve ter pelo menos 6 dezenas e pode ter até 15 dezenas ou até o usuário digitar 0.

## Saída

  Para cada aposta digitada o programa deve mostrar quantas quadras, quinas e sena que Paulo acertou. A saída de uma aposta deve ser compostar por três linhas:
    - A primeira linha deve exibir o texto "Quadras: " seguido de um espaço em branco e então a quantidade de quadras que Paulo acertou naquela aposta.
    - A primeira linha deve exibir o texto "Quinas: " seguido de um espaço em branco e então a quantidade de quinas que Paulo acertou naquela aposta.
    - A primeira linha deve exibir o texto "Sena: " seguido de um espaço em branco e então a quantidade de sena que Paulo acertou naquela aposta.

## Exemplos de testes

+--------------------------------------------+---------------+
|Entrada                                     |Saída          |
|--------------------------------------------+---------------+
| 15 32 45 1 5 58                            | Quadras: 0    | 
| 4                                          | Quinas: 0     |
| 15 32 45 1 5 58 0                          | Sena: 1       |
| 9 18 27 36 45 54 0                         | Quadras: 0    |    
| 5 10 15 20 25 30 35 40 45 50 50 55 60 0    | Quinas: 0     |
| 2 45 32 23 59 58 44 41 12 5 1 26 17 34 53  | Sena: 0       |        
|                                            | Quadras: 0    |       
|                                            | Quinas: 0     |
|                                            | Sena: 0       |
|                                            | Quadras: 225  |       
|                                            | Quinas: 10    |
|                                            | Sena: 0       |
+--------------------------------------------+---------------+


