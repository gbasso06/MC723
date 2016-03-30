# Projeto 1 - Parte 3: Relatório de Comparação de Performance

Para comparação das medições, compararei a média, a mediana e o desvio padrão das amostras coletadas de maior relevância para cada benchmark. 
Estas analises terão como finalidade identificar e debater os possíveis fatores para discrepância das medidas. Vale ressaltar que nem sempre a analise pode estar correto, o tempo também pode ser influenciado por outras tarefas que as máquinas podiam estar executando no momento.

## Benchmark 1: Genetic
* Dados comparados: Tempo e Performance de Disco

|               | Tempo (s) | Performance de Disco (MB/s) |
|:-------------:|:---------:|:---------------------------:|
|     Média     |   109.74  |             72.3            |
|    Mediana    |   64.72   |            79.95            |
| Desvio Padrão |   145.3   |            35.73            |

A distância entre a média e a mediana, bem como o valor de desvio padrão, nos mostra que os dados de tempo foram muito discrepantes. O maior tempo foi: 568,4 seg (maquina número 23), o que é compreensivo devido a esta execução ter ocorrido na placa de raspberry Pi (900MHz quad-core ARM Cortex-A7 CPU, 1GB RAM), com configurações mais baixas.<br>
Os dados de Performance de Disco foram mais consistentes e próximos, apresentando uma menor taxa de variação. Novamente o menor valor foi da placa: 10.4 MB/s e o melhor foi: 133.6 MB/s (máquina 5) com configuração Intel(R) Core(TM) i7-3610QM CPU 4 cores, 8 threads @ 2.30GHz @ L1 256 KB / L2 1024 KB / L3 6144 KB.

## Benchmark 2: ffmpeg
## Benchmark 3: Convolução

* Dados comparadaos: Tempo médio, Escrita média e Leitura Média<br>

|               | Tempo Médio(s) | Escrita Média (MB/s) | Leitura Média (MB/s) |
|:-------------:|:--------------:|:--------------------:|:--------------------:|
|     Média     |      31.25     |        1135.67       |        2377.1        |
|    Mediana    |      13.7      |        1264.65       |        2413.4        |
| Desvio Padrão |      39.09     |        686.52        |        1154.7        |

A convolução faz um uso intenso de memória e processamento. Por fazer uma série de operações de escrita e leitura a quantidade de memória RAM faz diferença. Isso pode ser comprovado no tempo de: 13,7 seg na máquina de configuração  AMD PhenonII, 4 cores, 3.2MHz; 10GB, ddr3, 1.333 MHz, enquanto que o pior tempo médio foi: 123.7 seg na máquina de configuração Intel(R) Core(TM)2 Quad CPU Q8400  @ 2.66GHz; Memory 4GB, que possui um processador, teoricamente, superior.<br>
Um fator interessante foi que a terceira menor velocidade de escrita (82.1 MB/s) foi da máquina com configuração Intel Core i7 @ 2.3GHz; 8 GB 1600 MHz DDR3. Este tempo anormal pode ter acontecido devido ao uso da RAM por outras atividades no momento em que os testes aconteciam.<br>
Outro fator relevante foi que as menores velocidades médias de escrita e leitura (13.8 e 92.1 MB/s, respectivamente) também pertencem a máquina AMD PhenonII. Isso se da porque a velocidade de acesso a memória de armazenamento, ao disco, é muito menor que a de processamento. Porém como a quantidade de acessos a memoria de armazenamento é menor que a de processamento, o seu tempo médio não é ruim.<br>

## Benchmark 4: Gnuplot
## Benchmark 5: Ordenação
## Benchmark 6:
## Benchmark 7:
## Benchmark 8:
