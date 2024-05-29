# GUERRA FRIA
## Descrição do Problema

  Durante a Guerra Fria a toca de mensagens era realizada de uma forma "especial" a fim de evitar que tropas inimigas interceptassem a mesma e descobrissem segredos e estratégias importantes.

  Essa forma "especial" de se enviar as mensagens foi definida pela Enigma a qual se utiliza da combinação de sistemas elétricos e mecânicos para criptografar as mensagens e consequentemente deixar elas secretas.

  O processo utilizado era bastante peculiar, onde eram utilizadas somente letras (todas maiúsculas) e eram aplicadas sobre elas uma rotação (código) que era responsável por "criptografar" a mensagem original. Com isso, caso a mensagem fosse interceptada a mesma estaria totalmente ilegivél para quem não tivesse  conhecimento do código utilizado no processo.

  Para dificultar a leitura no processo os espações em branco foram substituidos por # (hashtags). Além disso, quando as seguintes letras existissem na palavra original elas deveriam ser substituidas por:

    - A por @
    - S por $
    - E por 3
    - I por !
    - O por 0

## Entrada

  A entrada é composta por vários casos de teste. Cada caso de teste é composto por duas linhas. A primeira linha de um caso de teste contém um numero inteiro N que representa a rotação que será realizada. A segunda linha de um caso de teste contém a frase S que será criptografada; todas as letras de S são maiúsculas.
    - A entrada termina quando N = 0

## Saída

  A Saida deve conter um linha para cada caso de teste. A linha da saída de um caso de test deve conter a frase criptografada. Caso seja informada uma rotação fora do intervalo indicado ou uma palavra exceder o tamanho estipulado deve ser exibido "ERROR" como resposta.

## Exemplos de testes

+-----------------+---------------+
|Entrada          |Saída          |
|-----------------+---------------+
| 3               | I@F3Q$        | 
| FACENS          | ERROR         |
| 35              | D0NQVU@D@0    |
| MENSAGEM        | 3WP3WQ@A!@    |    
| 1               |               |
| COMPUTAÇÃO      |               |        
| ENGENHARIA      |               |       
| 0               |               |
+-----------------+---------------+

## Restrições

- 1 <=  N  <= 20
- 1 <= |S| <= 51 (tamanho S)

