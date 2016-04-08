# MC723 - Exercicio 2
## Gustavo Basso  RA: 105046

## Introdução

A atividade escolhida foi a segunda opção dada: simular 4 programas com diferentes configruações de cache e escolher a melhor para cada um deles. <br>
Os programas escolhidos foram: swim_f2b, mgrid_m2b, galgel_f2b e wupwise_m2b. <br>
Para cada simulação foram variados o tamanho do cache e o número de blocos que a cache carrega da memoria. Para cada : <br>
* *Tamanho do Cache*: 16k, 31k, 64k e 128k 
* *Numero de blocos*: 16, 32, 64 e 128

Cada uma combinação possível foi testada em cada uma das simulações. <br>
Ao detalhar cada uma das simulações apresentarei qual a porcentagem do total de fetchs correspondem a fetch de dados ou de instruções e, dentre estes, qual porcentagem compreende leituras e escritas na memória. Estes dados, juntamente com os resultados obtidos, serão levados em consideraçõa para a escolha da melhor configuração da cache para cada simulação. É importante ressaltar que para as 4 simulações, os misses de cache de instrução apresentaram numeros irrisórios, com porcentagem muito próximas a 0%. <br>

## Swim_f2b
* Total de Fetchs no Cache de Intruções: 399999994
  * Intruções: 100%
  * Dados: 0%
  * Leitura: 0%
  * Escrita: 0%

Como a porcentagem de misses é irrisória, o gráfico a seguir apresenta a váriação do número total de misses conforme variaram as configurações:

![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=959986855&format=image)

O gráfico nos mostra que o aumento do número de blocos carregados da memória possuí um impacto significativo, enquanto que o aumento do tamanho da cache só faz diferença significativa até 64K.

* Total de Fetchs no Cache de Dados: 101007955
  * Intruções: 0%
  * Dados: 100%
  * Leitura: 85.53%
  * Escrita: 14.47%

Total Miss:<br>![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=2129607576&format=image)<br>
Read miss:<br>![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=272073901&format=image)<br>
Write miss:<br>![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=1170136083&format=image)<br>

Tanto o total de misses e os misses de read são afetados similarmente pelo aumento do número de blocos carregados, porém o aumento do cache só impacta significativamente com 128k.
O gráfico dos misses de Write nos mostra que o aumento do tamanho de cache não possui impacto relevante.<br>
*Melhor configuração*: 18K com 128 blocos

## Mgrid_m2b
* Total de Fetchs no Cache de Intruções: 399999420
  * Intruções: 100%
  * Dados: 0%
  * Leitura: 0%
  * Escrita: 0%

O gráfico a seguir mostra como o número de misses diminui com o aumento do tamanho da cache e com o aumento do número de blocos carregados da memória:

![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=208604784&format=image) 
  
Em todos os gráficos apresentados a linha vermelha correponde ao título, enquanto que as barras azuis correspondem ao número de blocos carregados da memória.
  
* Total de Fetchs no Cache de Dados: 144104981
  * Intruções: 0%
  * Dados: 100%
  * Leitura: 84.48%
  * Escrita: 15.52%

Abaixo estão os gráficos da porcentagem total de Miss, Total de Miss das operações de leitura e total de miss das operações de escrita no cache de dados: <br>

Total Miss:<br>![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=1732521130&format=image)<br>
Read miss:<br>![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=1109622336&format=image)<br>
Write miss:<br>![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=1415368161&format=image)<br>

Tanto o total de misses, quanto o total de misses da operações de read, apresentam melhora significativa com o aumento do número de blocos que cache carrega. O aumento do tamanho da cache só mostra impacto significativo a partir de 128K. <br>
Já o write miss não apresenta melhora significativa no aumento do tamanho do cache, apenas no aumento do número de blocos carregados.<br>
*Melhor configuração*: 128K com 128 blocos.

## Galgel_f2b
* Total de Fetchs no Cache de Intruções: 399999985
  * Intruções: 100%
  * Dados: 0%
  * Leitura: 0%
  * Escrita: 0%

Segue gráfico do total de misses, conforme a variação das configurações:<br>

![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=515494707&format=image) <br>

O aumento do número de blocos carregados da memória diminui o total de misses, porém a partir de 32K não faz diferença o aumento do tamanho da memória.<br>

* Total de Fetchs no Cache de Dados: 95002966
  * Intruções: 0%
  * Dados: 100%
  * Leitura: 75.04%
  * Escrita: 24.96%

Seguem os gráficos da porcentagem do total misses, read misses e writing misses:<br>

Total Misses:<br>![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=2070317574&format=image)<br>
Read Misses:<br>![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=1520951789&format=image)<br>
Writing Misses:<br>![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=1322255841&format=image)<br>

Nos três casos o aumento do tamanho do caches melhora a porcentagem de misses, porém o aumento do número de blocos carregados só é benéfico até 64 blocos. Um dos motivos disso ocorrer pode ser acesso a posições distintas da memória com blocos muito grandes carregados, o que implicaria em muitos misses.
*Melhor configuração*: 128K com 64 blocos
## Wupwise_m2b:
* Total de Fetchs no Cache de Intruções: 399999993
  * Intruções: 100%
  * Dados: 0%
  * Leitura: 0%
  * Escrita: 0%

Segue gráfico do total de misses, conforme a variação das configurações:<br>
![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=2048137870&format=image)

O gráfico mostra que o aumento do tamanho de cache, assim como o aumento do numero de blocos carregados, apresentam melhoras significativas no número de misses. Porém esse aumento se torna insignificante a parte de caches com tamanho de 32k.<br>
* Total de Fetchs no Cache de Dados: 117928567
  * Intruções: 0%
  * Dados: 100%
  * Leitura: 76.95%
  * Escrita: 23.05%

Total Misses:<br>![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=170466165&format=image)<br>
Read Misses:<br>![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=309145343&format=image)<br>
Writing Misses:<br>![](https://docs.google.com/spreadsheets/d/1OxLnOWhYRgaBHvVpQcZhttQJJnoN51nUtS_LUnPhhU8/pubchart?oid=760249419&format=image)<br>

Os gráficos mostram que os misses no cache de dados melhoram significativamente com o aumento do número de blocos carregados, enquanto que apresentam melhora mais tímida com o aumento do tamanho do cache, tanto que 64k e 128k apresentam resultados semelhantes.<br>
*Melhor Configuração*: 128K com 128 blocos.
## Conclusão
No geral, as simulações apresentamram comportamento relativamente semelhantes: diminuição do número de misses com o aumento do número de blocos e/ou aumento do tamanho da cache.<br>
Exceções podem ocorrer quando acessos a posições muito distintas da memória, em conjunto com blocos muito grandes, o que implicaria em um maior número de misses.<br>
