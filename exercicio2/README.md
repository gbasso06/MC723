# MC723 - Exercicio 2
## Gustavo Basso  RA: 105046

## Introdução

A atividade escolhida foi a segunda opção dada: simular 4 programas com diferentes configruações de cache e escolher a melhor para caada um deles. <br>
Os programas escolhidos foram: swim_f2b, mgrid_m2b, galgel_f2b e wupwise_m2b. <br>
Para cada simulação foram variados o tamanho do cache e o número de blocos, sendo que cada um vario da seguinte maneira: <br>
* *Tamanho do Cache*: 16k, 31k, 64k e 128k 
* *Número de blocos*: 16, 32, 64 e 128

Cada uma combinação possível foi testada em cada uma das simulações. <br>
Ao detalhar cada uma das simulações apresentarei qual a porcentagem do total de fetchs correspondem a fetch de dados ou de instruções e, dentre estes, qual porcentagem compreende leituras e escritas na memória. Estes dados, juntamente com os resultados obtidos, será levada em consideraçõa para a escolha da melhor configuração de cache para cada simulação. É importante ressaltar que para as 4 simulações, os misses de cache de instrução apresentaram numeros irrisórios, com porcentagem muito próximas a 0%. <br>

## Swim_f2b

## Mgrid_m2b
* Total de Fetchs no Cache de Intruções: 399999420
  * Intruções: 100%
  * Dados: 0%
  * Leitura: 0%
  * Escrita: 0%

O número de misses do cache de instruction mostrou uma queda tanto quando o aumento do numero de blocos ocorreu, quanto com o aumento do número de cache, como pode ser conferido no gráfico a seguir:

![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=208604784&format=image) 
  
Em todos os gráficos apresentados a linha vermelha correponde ao título, enquanto que as barras azuis correspondem ao número de blocos.
  
* Total de Fetchs no Cache de Dados: 144104981
  * Intruções: 0%
  * Dados: 100%
  * Leitura: 84.48%
  * Escrita: 15.52%

Total Miss: ![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=1732521130&format=image)
Read miss: ![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=1109622336&format=image)
Write miss: ![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=1415368161&format=image)


![]()


## Galgel_f2b

## Wupwise_m2b



