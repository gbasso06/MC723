# Projeto 1 - Parte 3: Relatório de Comparação de Performance

Para comparação das medições, compararei a média, a mediana e o desvio padrão das amostras coletadas de maior relevância para cada benchmark. 
Estas analises terão como finalidade identificar e debater os possíveis fatores para discrepância das medidas. Vale ressaltar que nem sempre a analise pode estar correta, dado que o tempo de execução pode ser influenciado por diversas outras atividades que a máquina pode estar executando no momento da medida.

## Benchmark 1: Genetic
* Dados comparados: Tempo e Performance de Disco

|               | Tempo (s) | Performance de Disco (MB/s) |
|:-------------:|:---------:|:---------------------------:|
|     Média     |   109.74  |             72.3            |
|    Mediana    |   64.72   |            79.95            |
| Desvio Padrão |   145.3   |            35.73            |

A distância entre a média e a mediana, bem como o valor de desvio padrão, nos mostra que os dados de tempo foram muito discrepantes. O maior tempo foi: 568,4 seg (maquina número 23), o que é compreensivo devido a esta execução ter ocorrido na placa de raspberry Pi (900MHz quad-core ARM Cortex-A7 CPU, 1GB RAM), com configurações mais baixas. Os computadores que possuem processadores mais modernos, tiveram seu tempo semelhante, sendo um fator de discrepância o clock de cada processador.<br>
Os dados de Performance de Disco foram mais consistentes e próximos, apresentando uma menor taxa de variação. Novamente o menor valor foi da placa: 10.4 MB/s e o melhor foi: 133.6 MB/s (máquina 5) com configuração Intel(R) Core(TM) i7-3610QM CPU 4 cores, 8 threads @ 2.30GHz @ L1 256 KB / L2 1024 KB / L3 6144 KB.

## Benchmark 2: ffmpeg

* Dados comparados: Tempo de execução, Page-faults e Misses do cache L1<br>

|               | Tempo Elapsed | Page-Faults | L1 Caches misses |
|:-------------:|:-------------:|:-----------:|:----------------:|
|     Média     |      29,5     |   20991,08  |   2.005.033.469  |
|    Mediana    |     29,67     |    20766    |   2.311.427.152  |
| Desvio Padrão |      14,3     |    5990,6   |   769.763.430,9  |

Este benchmark foi interessante pois ele utiliza processamento paralelo, o que permitiu que processadores com multiplos nucleos e threads possuissem desempenho relativamente superior. O numero de page-faults tambem manteve uma certa proporção inversa com os computadores que possuem maior memória, como esperado, uma vez que eles podem trazer mais páginas do disco diminuindo o nuúmero de misses.<br>
Neste benchmark nenhuma das máquina apresentou uma discrepância significativa que não possa ser justificada pelo suas especificações.<br>

## Benchmark 3: Convolução

* Dados comparados: Tempo médio, Escrita média e Leitura Média<br>

|               | Tempo Médio(s) | Escrita Média (MB/s) | Leitura Média (MB/s) |
|:-------------:|:--------------:|:--------------------:|:--------------------:|
|     Média     |      31.25     |        1135.67       |        2377.1        |
|    Mediana    |      13.7      |        1264.65       |        2413.4        |
| Desvio Padrão |      39.09     |        686.52        |        1154.7        |

A convolução faz um uso intenso de memória e processamento. Por fazer uma série de operações de escrita e leitura a quantidade de memória RAM faz diferença. Isso pode ser comprovado no tempo de: 13,7 seg na máquina de configuração  AMD PhenonII, 4 cores, 3.2MHz; 10GB, ddr3, 1.333 MHz, enquanto que o pior tempo médio foi: 123.7 seg na máquina de configuração Intel(R) Core(TM)2 Quad CPU Q8400  @ 2.66GHz; Memory 4GB, que possui um processador, teoricamente, superior.<br>
Um fator interessante foi que a terceira menor velocidade de escrita (82.1 MB/s) foi da máquina com configuração Intel Core i7 @ 2.3GHz; 8 GB 1600 MHz DDR3. Este tempo anormal pode ter acontecido devido ao uso da RAM por outras atividades no momento em que os testes aconteciam.<br>
Outro fator relevante foi que as menores velocidades médias de escrita e leitura (13.8 e 92.1 MB/s, respectivamente) também pertencem a máquina AMD PhenonII. Isso se da porque a velocidade de acesso a memória de armazenamento, ao disco, é muito menor que a de processamento. Porém como a quantidade de acessos a memoria de armazenamento é menor que a de processamento, o seu tempo médio não é ruim.<br>

## Benchmark 4: Gnuplot

* Dados comparados: Tempo médio, Clock do Cpu e Bus Cycle<br>

|               | Time Elapsed (s)  | CPU-clock (mseg) |  Bus Cycles |
|:-------------:|:-----------------:|:----------------:|:-----------:|
|     Média     |       15.44       |     15039.12     |  5497865737 |
|    Mediana    |        2.82       |      2614.53     |  865732591  |
| Desvio Padrão |       37.36       |     36359.49     | 16651143745 |

Novamente a Raspberry Pi apresentou o pior tempo: 133.27 seg, muito superior os demais. Também foi encontrada uma certa inconsistência em um dos dados de tempo: 0.002 seg de tempo de execução. Acredito que este dado foi uma entrada incorreta, seja na hora de medir ou de colocar na planilha.<br>
Com exceção destes casos anormais, foi possível perceber que os processadores mais modernos apresentaram tempos mais baixos. <br>

## Benchmark 5: Ordenação
## Benchmark 6:

## Benchmark 7: TCC

* Dados comparadaos: Médias de 10 execuções<br>

|               | Tempo Médio |
|:-------------:|:-----------:|
|     Média     |     57.2    |
|    Mediana    |    39.09    |
| Desvio Padrão |    47.98    |

O TCC foi um tanto quanto consistente nas medições obtidas. No geral os tempos seguiram o que era esperado, menores tempo para os processadores mais potentes e maiores para os menos potentes. <br>
Um ponto que vale ressaltar nas medidas e o tempo da maquina que possuia o processador mais fraco entre os utilizados nas medições: Intel® Core™2 Duo CPU T6500 @ 2.10GHz × 2, 4GB RAM. O seu tempo foi: 39.98 seg. Este dado foi o unico que apresentou uma anormalidade significativa, sendo dificil justificar este tempo apenas pela configuração da máquina.


## Benchmark 8: FFTW

* Dados comparadaos: Tempo médio da DFT1D e Tempo Médio da DFT1D_IO<br>

|               | DFT1D | DFT1D_IO |
|:-------------:|:-----:|:--------:|
|     Média     | 50.80 |   28.77  |
|    Mediana    | 15.68 |   26.89  |
| Desvio Padrão | 94.99 |   13.22  |

Algo que foi altamente incomum nas medidas deste benchmark foi que a média da execução sem escrita na memória ser maior que a das execuções com escrita na memória. O que mais influenciou foi o maior tempo: 265.89 (Intel(R) Core(TM) i3-3110M CPU @ 2.40GHz 3072 KB Cache, 4GB RAM DDR3). Acredito que este tempo ou foi anotado errado, ou foi colhido enquanto a máquina fazia um processamento intenso de outra task, pois o segundo maior tempo foi: 38.36 (Intel(R) Core(TM)2 Quad CPU Q8400 @ 2.66GHz), com uma máquina que possui um processador menos potente, e o desvio padrão das medidas foi muito alto, indicando uma alta distância entre as medidas obtidas <br>
Vale ressaltar que este caso foi o único em que a execução com escrita na memória teve tempo menor que a sem escrita na memória, mais uma vez reforçando a tese de medida corrompida ou erro de anotação dos dados.<br>
